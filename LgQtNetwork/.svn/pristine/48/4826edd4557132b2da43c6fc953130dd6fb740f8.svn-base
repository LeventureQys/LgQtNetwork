#include "QtUdpHandler.h"

QtUdpHandler::QtUdpHandler(QObject *parent) : QObject(parent)
	, m_pUdpSocket(new QUdpSocket(parent))
{
	connect(m_pUdpSocket, SIGNAL(readyRead()), this, SLOT(RecvUdp()));
}

QtUdpHandler::~QtUdpHandler()
{
	delete m_pUdpSocket;
}

bool QtUdpHandler::JoinGroup(const QString &qsGroupAddr, quint16 port)
{
	if (m_bJoined) LeaveGroup(m_qsGroupAddr);

	// 加入前需要先绑定
	if (!m_pUdpSocket->bind(QHostAddress::AnyIPv4, port, 
		QUdpSocket::ShareAddress | QUdpSocket::ReuseAddressHint))
	{
		qInfo() << QStringLiteral("绑定失败：") + m_pUdpSocket->errorString();
		return false;
	}

	if (!m_pUdpSocket->joinMulticastGroup(QHostAddress(qsGroupAddr)))
	{
		qInfo() << QStringLiteral("加入失败：") + m_pUdpSocket->errorString();
		return false;
	}

	m_bJoined = true;
	m_qsGroupAddr = qsGroupAddr;
	m_Port = port;
	return true;
}

bool QtUdpHandler::LeaveGroup(const QString &qsGroupAddr)
{
	if (m_pUdpSocket->leaveMulticastGroup(QHostAddress(qsGroupAddr)))
	{
		m_pUdpSocket->abort();

		m_Port = 0;
		m_qsGroupAddr = "";

		return true;
	}

	// 接触绑定
	
	return false;
}

void QtUdpHandler::SendUdp(const QByteArray &bytes, const QString& qsSendTo /*= ""*/, quint16 port /*= 0*/)
{
	QString qsRealSendTo = qsSendTo;
	if (qsRealSendTo.isEmpty())
	{
		if (m_qsGroupAddr.isEmpty())
		{
			qInfo() << QStringLiteral("发送目标地址为空！");
			return;
		}

		qsRealSendTo = m_qsGroupAddr;
	}

	qInfo() << QStringLiteral("qtnetdll给%1发送udp消息：%2").arg(qsRealSendTo).arg(QString::fromLocal8Bit(bytes));

	quint16 qu16RealPort = port;
	if (0 == qu16RealPort)
	{
		if (0 == m_Port)
		{
			qInfo() << QStringLiteral("发送端口无效！");
			return;
		}

		qu16RealPort = m_Port;
	}

	m_pUdpSocket->writeDatagram(bytes, QHostAddress(qsRealSendTo), qu16RealPort);
}

void QtUdpHandler::RecvUdp()
{
	QByteArray bytes;
	QHostAddress addr;
	quint16 port;
	while (m_pUdpSocket->hasPendingDatagrams())
	{
		bytes.resize(m_pUdpSocket->pendingDatagramSize());

		m_pUdpSocket->readDatagram(bytes.data(), bytes.size(), &addr, &port);

		qInfo() << QStringLiteral("qtnetdll收到来自%1的udp消息：%2").arg(addr.toString()).arg(QString::fromLocal8Bit(bytes));
		emit RecvedUdp(bytes, addr.toString(), port);
	}
}
