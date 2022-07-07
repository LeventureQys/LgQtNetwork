#include "demo.h"

#include <QTime>
#include <QTimer>
#include <QThread>
#include <QtNetwork/QNetworkInterface>

#define QStringToByte(qs) qs.toLocal8Bit();
#define BytesToQString(bytes) QString::fromLocal8Bit(bytes)

namespace {
	QString getHostIpAddress()
	{
		QString strIpAddress;
		QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
		// 获取第一个本主机的IPv4地址
		int nListSize = ipAddressesList.size();
		for (int i = 0; i < nListSize; ++i)
		{
			if (ipAddressesList.at(i) != QHostAddress::LocalHost &&
				ipAddressesList.at(i).toIPv4Address()) {
				strIpAddress = ipAddressesList.at(i).toString();
				break;
			}
		}
		// 如果没有找到，则以本地IP地址为IP
		if (strIpAddress.isEmpty())
			strIpAddress = QHostAddress(QHostAddress::LocalHost).toString();
		return strIpAddress;
	}
}

void QSleep(int nInterval)
{
	QTime dieTime = QTime::currentTime().addMSecs(nInterval);
	while (QTime::currentTime() < dieTime)
		QCoreApplication::processEvents(QEventLoop::AllEvents);
}

demo::demo(QWidget *parent)
    : QMainWindow(parent)
	, m_pUdpHandler(new QtUdpHandler(this))
	, m_pTcpServerHandler(new QtTCPServerHandler(this))
	, m_pTcpClientHandler(new QtTcpClientHandler(this))
{
    ui.setupUi(this);

	ui.lEditServerAddr->setText(getHostIpAddress());
	ui.label_5->setVisible(false);
	ui.lEditServerAddr->setVisible(false);
	ui.lEditClientAddr->setText(ui.lEditServerAddr->text());

	connect(m_pUdpHandler, SIGNAL(RecvedUdp(const QByteArray, const QString, const quint16)),
		this, SLOT(onRecvedUdp(const QByteArray, const QString, const quint16)));

	connect(m_pTcpServerHandler, SIGNAL(NewConn(const QString &, const quint16, const quint16)),
		this, SLOT(ServerNewConn(const QString &, const quint16, const quint16)));
	connect(m_pTcpServerHandler, SIGNAL(NewDisConn(const QString &, const quint16)),
		this, SLOT(ServerNewDisConn(const QString &, const quint16)));
	connect(m_pTcpServerHandler, SIGNAL(RecvClnMsg(const QString &, const quint16, const QByteArray &)),
		this, SLOT(ServerRecvClnMsg(const QString &, const quint16, const QByteArray &)));

	connect(m_pTcpClientHandler, SIGNAL(Connected(const QString &, const quint16)),
		this, SLOT(ClientConnectedServer(const QString &, const quint16)));
	connect(m_pTcpClientHandler, SIGNAL(Disconnect(const QString &, const quint16)),
		this, SLOT(ClientDisconnect(const QString &, const quint16)));
	connect(m_pTcpClientHandler, SIGNAL(RecvTCP(const QByteArray&)),
		this, SLOT(ClientRecvTCP(const QByteArray&)));
}

void demo::on_pBtnCreateUdp_clicked()
{
}

void demo::on_pBtnAddGroup_clicked()
{
	bool bRet = m_pUdpHandler->JoinGroup(ui.lEditGroupAddr->text(), ui.lEditGroupPort->text().toUShort());

	if (bRet)
	{
		QString qs = QString(QStringLiteral("已成功加入：[")) + ui.lEditGroupAddr->text()
			+ ":" + ui.lEditGroupPort->text();
		ui.txtEditRecvUdp->append(qs);
	}
}

void demo::on_pBtnExitGroup_clicked()
{
	bool bRet =  m_pUdpHandler->LeaveGroup(ui.lEditGroupAddr->text());
	if (bRet)
	{
		if (bRet)
		{
			QString qs = QString(QStringLiteral("已成功退出：[")) + ui.lEditGroupAddr->text()
				+ ":" + ui.lEditGroupPort->text();
			ui.txtEditRecvUdp->append(qs);
		}
	}
}

void demo::on_pBtnSendUdp_clicked()
{
	QString qsMsg = ui.txEditSendUdp->toPlainText();
	QByteArray bytes = QStringToByte(qsMsg);
	m_pUdpHandler->SendUdp(bytes);
}

void demo::onRecvedUdp(const QByteArray &bytes, const QString &qsFrom, const quint16 port)
{
	QString qs = "[" + qsFrom + ":" + port + "]: " + bytes;;
	ui.txtEditRecvUdp->append(qs);
}

int demo::GetServerSendTimes()
{
	return ui.cBoxServerSendTimes->currentText().toInt();
}

int demo::GetServerSendInterval()
{
	return ui.lEditServerSendInterval->text().toInt();
}

void demo::on_pBtnCreateServer_clicked()
{
	if (m_pTcpServerHandler->Open(ui.lEditServerPort->text().toUShort()))
	{
		QString qs = QString(QStringLiteral("TCP服务创建成功：")) +
			"[" + ui.lEditServerAddr->text() + ":" + ui.lEditServerPort->text() + "]";
		ui.txtEditServerRecvTcp->append(qs);
	}	 
}

void demo::on_pBtnCloseServer_clicked()
{
	m_pTcpServerHandler->Close();
	QString qs = QString(QStringLiteral("TCP服务端已关闭：")) +
		"[" + ui.lEditServerAddr->text() + ":" + ui.lEditServerPort->text() + "]";
	ui.txtEditServerRecvTcp->append(qs);
}

void demo::on_pBtnServerSendTcp_clicked()
{
	QString qs = ui.txEditServerSendTcp->toPlainText();
	int nTimes = GetServerSendTimes();
	int nInterval = GetServerSendInterval();
	for (int i = 0; i < nTimes; ++i)
	{
		QByteArray bytes = QStringToByte(qs);
		m_pTcpServerHandler->SendMsg(bytes);

		QSleep(nInterval);
	}
}

void demo::on_pBtnServerTimerSendTcp_clicked()
{
	if (Q_NULLPTR == m_pSrvTimer)
	{
		m_pSrvTimer = new QTimer(this);
		connect(m_pSrvTimer, SIGNAL(timeout()), 
			this, SLOT(ServerTimeout()));
	}
	m_pSrvTimer->setInterval(GetServerSendInterval());
	m_pSrvTimer->start();	
}

void demo::on_pBtnServerEndTimer_clicked()
{
	m_pSrvTimer->stop();
}

void demo::ServerNewConn(const QString &clnAddr, const quint16 clnPort, const quint16 port)
{
	QString qs = QString(QStringLiteral("新的连接：")) +
		"[" + clnAddr + ":" + QString::number(clnPort) + "]";
	qs += QString(QStringLiteral(" 本地端口：")) + QString::number(port);
	ui.txtEditServerRecvTcp->append(qs);
}

void demo::ServerNewDisConn(const QString &clnAddr, const quint16 clnPort)
{
	QString qs = QString(QStringLiteral("连接断开：")) +
		"[" + clnAddr + ":" + QString::number(clnPort) + "]";
	ui.txtEditServerRecvTcp->append(qs);
}

void demo::ServerRecvClnMsg(const QString &clnAddr, const quint16 clnPort, const QByteArray &bytes)
{
	QString qs = "[" + clnAddr + ":" + QString::number(clnPort) + "]: " + BytesToQString(bytes);
	ui.txtEditServerRecvTcp->append(qs);
// 
// 	QThread::msleep(1000);
}

void demo::ServerTimeout()
{
	QString qs = ui.txEditServerSendTcp->toPlainText();
	QByteArray bytes = QStringToByte(qs);
	m_pTcpServerHandler->SendMsg(bytes);
}

int demo::GetClientSendTimes()
{
	return ui.cBoxClientSendTimes->currentText().toInt();
}

int demo::GetClientSendInterval()
{
	return ui.lEditClientSendInterval->text().toInt();
}

void demo::on_pBtnCreateClient_clicked()
{
	m_pTcpClientHandler->Open(ui.lEditClientAddr->text(), ui.lEditClientPort->text().toUShort());
}

void demo::on_pBtnCloseClient_clicked()
{
	m_pTcpClientHandler->Close();
}

void demo::on_pBtnClientSendTcp_clicked()
{
	QString qs = ui.txEditClientSendTcp->toPlainText();
	int nTimes = GetClientSendTimes();
	int nInterval = GetClientSendInterval();
	for (int i = 0; i < nTimes; ++i)
	{
		QByteArray bytes = QStringToByte(qs);
		m_pTcpClientHandler->SendMsg(bytes);

		QSleep(nInterval);
	}
}

void demo::on_pBtnClientTimerSendTcp_clicked()
{
	if (Q_NULLPTR == m_pClnTimer)
	{
		m_pClnTimer = new QTimer(this);
		connect(m_pClnTimer, SIGNAL(timeout()),
			this, SLOT(ClientTimeout()));
	}
	m_pClnTimer->setInterval(GetClientSendInterval());
	m_pClnTimer->start();
}

void demo::on_pBtnClientEndTimer_clicked()
{
	m_pClnTimer->stop();
}

void demo::ClientConnectedServer(const QString &qsServerAddr, const quint16 nServerPort)
{
	QString qs = QString(QStringLiteral("服务器已连接：")) + "[" + qsServerAddr + ":" + QString::number(nServerPort) + "]";
	ui.txtEditClientRecvTcp->append(qs);
}

void demo::ClientDisconnect(const QString &qsServerAddr, const quint16 nServerPort)
{
	QString qs = QString(QStringLiteral("服务器已断开：")) + "[" + qsServerAddr + ":" + QString::number(nServerPort) + "]";
	ui.txtEditClientRecvTcp->append(qs);
}

void demo::ClientRecvTCP(const QByteArray& bytes)
{
	ui.txtEditClientRecvTcp->append(BytesToQString(bytes));
}

void demo::ClientTimeout()
{
	QString qs = ui.txEditClientSendTcp->toPlainText();
	QByteArray bytes = QStringToByte(qs);
	m_pTcpClientHandler->SendMsg(bytes);
}
