#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_demo.h"

#include "../LgQtNetwork/udp/QtUdpHandler.h"
#include "../LgQtNetwork/tcp/server/QtTCPServerHandler.h"
#include "../LgQtNetwork/tcp/client/QtTcpClientHandler.h"

class demo : public QMainWindow
{
    Q_OBJECT

public:
    demo(QWidget *parent = Q_NULLPTR);

private slots:
	// udp
	void on_pBtnCreateUdp_clicked();
	void on_pBtnAddGroup_clicked();
	void on_pBtnExitGroup_clicked();
	void on_pBtnSendUdp_clicked();
	void onRecvedUdp(const QByteArray &bytes, const QString &qsFrom, const quint16 port);

	// tcpserver
	int GetServerSendTimes();
	int GetServerSendInterval();
	void on_pBtnCreateServer_clicked();
	void on_pBtnCloseServer_clicked();
	void on_pBtnServerSendTcp_clicked();
	void on_pBtnServerTimerSendTcp_clicked();
	void on_pBtnServerEndTimer_clicked();
	void ServerNewConn(const QString &clnAddr, const quint16 clnPort, const quint16 port);
	void ServerNewDisConn(const QString &clnAddr, const quint16 clnPort);
	void ServerRecvClnMsg(const QString &clnAddr, const quint16 clnPort, const QByteArray &bytes);
	void ServerTimeout();

	// tcpClient
	int GetClientSendTimes();
	int GetClientSendInterval();
	void on_pBtnCreateClient_clicked();
	void on_pBtnCloseClient_clicked();
	void on_pBtnClientSendTcp_clicked();
	void on_pBtnClientTimerSendTcp_clicked();
	void on_pBtnClientEndTimer_clicked();
	void ClientConnectedServer(const QString &qsServerAddr, const quint16 nServerPort);
	void ClientDisconnect(const QString &qsServerAddr, const quint16 nServerPort);
	void ClientRecvTCP(const QByteArray& bytes);
	void ClientTimeout();

private:
	QtUdpHandler *m_pUdpHandler = Q_NULLPTR;
	QtTCPServerHandler *m_pTcpServerHandler = Q_NULLPTR;
	QTimer *m_pSrvTimer = Q_NULLPTR;

	QtTcpClientHandler *m_pTcpClientHandler = Q_NULLPTR;
	QTimer *m_pClnTimer = Q_NULLPTR;
	
    Ui::demoClass ui;
};
