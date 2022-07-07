#include "QtTCPServerHandler.h"
#include "QtTcpBaseHandler.h"

#include <QNetworkInterface>
#include <QThread>

namespace {
	QString getHostIpAddress()
	{
		QString strIpAddress;
		QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
		// ��ȡ��һ����������IPv4��ַ
		int nListSize = ipAddressesList.size();
		for (int i = 0; i < nListSize; ++i)
		{
			if (ipAddressesList.at(i) != QHostAddress::LocalHost &&
				ipAddressesList.at(i).toIPv4Address()) {
				strIpAddress = ipAddressesList.at(i).toString();
				break;
			}
		}
		// ���û���ҵ������Ա���IP��ַΪIP
		if (strIpAddress.isEmpty())
			strIpAddress = QHostAddress(QHostAddress::LocalHost).toString();
		return strIpAddress;
	}
}

QtTCPServerHandler::QtTCPServerHandler(QObject *parent) : QObject(parent)
	, m_pParent(parent)
{
}

QtTCPServerHandler::~QtTCPServerHandler()
{
	Close();
}

quint16 QtTCPServerHandler::ServerPort()
{
	if (Q_NULLPTR != m_pTcpServer)
	{
		return m_pTcpServer->serverPort();
	}

	return 0;
}

bool QtTCPServerHandler::Open(const quint16 port)
{
	m_pTcpServer = new QTcpServer(m_pParent);
	//if (!pTcpServer->listen(QHostAddress::LocalHost, port))	// ����ֻ�ܴ���127.0.0.1������
	if (!m_pTcpServer->listen(QHostAddress(::getHostIpAddress()), port))
	{
		qInfo() << QStringLiteral("�����˿�ʧ�ܣ�") + QString::number(port);
		return false;
	}
	connect(m_pTcpServer, SIGNAL(newConnection()), this, SLOT(NewConn()));

	return true;
}

void QtTCPServerHandler::Close()
{
	if (Q_NULLPTR != m_pTcpServer)
	{
		m_pTcpServer->close();

		delete m_pTcpServer;
		m_pTcpServer = Q_NULLPTR;
	}

	CloseAllConn();
}

quint16 QtTCPServerHandler::ConnectCount()
{
	return m_qhsSocketCln.size();
}

void QtTCPServerHandler::CloseAllConn()
{
	for (auto it = m_qhsSocketCln.begin(); it != m_qhsSocketCln.end();)
	{
		// close�ᴥ���Ͽ��������Ͽ�ʱ���Ƴ������������ﲻ��Ҫɾ��
		(*it)->pTcpSocket->close();
		//it = m_qhsSocketCln.erase(it);

		it = m_qhsSocketCln.begin();
	}
}

void QtTCPServerHandler::SendMsg(const QByteArray &bytes, QString clnAddr /*= ""*/, quint16 clnPort /*= 0*/)
{
	auto funSend = [&](ClnInfo *pCln){
		SendTcp(pCln->pTcpSocket, bytes);

		qInfo() << QStringLiteral("��%1����TCP��%2").arg(pCln->qsAddr).arg(QString::fromLocal8Bit(bytes));
	};

	for (auto &item : m_qhsSocketCln)
	{
		if (!clnAddr.isEmpty() && (clnAddr != item->qsAddr)) continue;
		
		if (clnPort == item->pTcpSocket->peerPort())
		{
			funSend(item);
			break;
		}
		else if (0 == clnPort)
		{
			funSend(item);
		}
	}
}

void QtTCPServerHandler::RecvClnMsg()
{
	QTcpSocket *pTcpSocket = (QTcpSocket*)sender();
	ClnInfo *pClnInfo = m_qhsSocketCln.value((quint16)pTcpSocket, Q_NULLPTR);
	if (Q_NULLPTR == pClnInfo) return;

	QString qsPeerAddr = pClnInfo->pTcpSocket->peerAddress().toString();
	quint16 qnPort = pClnInfo->pTcpSocket->peerPort();

	ReadTCPMsg(pTcpSocket, pClnInfo->nRecvedMsgLen, [&](const QByteArray& bytes) {
		qInfo() << QStringLiteral("qtnetdll�յ�����%1��TCP��%2").arg(qsPeerAddr).arg(QString::fromLocal8Bit(bytes));
		emit RecvClnMsg(qsPeerAddr, qnPort, bytes);
	});
}

void QtTCPServerHandler::NewConn()
{
	QTcpServer *pTcpServer = (QTcpServer*)sender();
	quint16 nServerPort = pTcpServer->serverPort();
	QTcpSocket *pClnTcpSocket = pTcpServer->nextPendingConnection();

	// �Ǽ�
	ClnInfo *pNewClnInfo = new ClnInfo;
	pNewClnInfo->pTcpSocket = pClnTcpSocket;
	pNewClnInfo->qsAddr = pClnTcpSocket->peerAddress().toString();
	m_qhsSocketCln.insert((quint16)pClnTcpSocket, pNewClnInfo);

	// �����ź�
	connect(pClnTcpSocket, SIGNAL(readyRead()), this, SLOT(RecvClnMsg()));
	connect(pClnTcpSocket, SIGNAL(disconnected()), this, SLOT(NewDisConn()));
	connect(pClnTcpSocket, &QTcpSocket::disconnected, [=] { pClnTcpSocket->deleteLater(); });

	// 
	qInfo() << QStringLiteral("qtnetdll�µ����ӣ�(%1)").arg(pClnTcpSocket->peerAddress().toString());

	// �����ź�
	emit NewConn(pClnTcpSocket->peerAddress().toString(), pClnTcpSocket->peerPort(), pTcpServer->serverPort());
}

void QtTCPServerHandler::NewDisConn()
{
	QTcpSocket *pClnTcpSocket = (QTcpSocket*)sender();

	QMutexLocker lock(&m_qmtForqhsSocketCln);

	QString qsIP = pClnTcpSocket->peerAddress().toString();
	QString qsErr = pClnTcpSocket->errorString();
	qInfo() << QStringLiteral("qtnetdll�µĶϿ���(%1, %2)").arg(qsIP).arg(qsErr);

	quint16 port = pClnTcpSocket->peerPort();
	emit NewDisConn(qsIP, port);
	emit NewDisConnEx(qsIP, port, qsErr);

	//pClnTcpSocket->deleteLater();

	auto it = m_qhsSocketCln.find((quint16)pClnTcpSocket);
	if (it != m_qhsSocketCln.end())
	{
		m_qhsSocketCln.erase(it);
	}
}