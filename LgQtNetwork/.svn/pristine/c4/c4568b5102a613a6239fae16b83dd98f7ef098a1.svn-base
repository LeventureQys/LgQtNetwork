/*!
 * \file QtUdpHandler.h
 *
 * \author daiweiheng
 * \date 四月 2021
 *
 * 用于支持QT下的UDP传输，使用此类前需要在项目属性中添加network模块支持
 */
#pragma once
#include "../lgqtnetwork_global.h"

#include <QObject>
#include <QtNetwork/QUdpSocket>

class Q_DECL_EXPORT QtUdpHandler : public QObject
{
	Q_OBJECT

public:
	QtUdpHandler(QObject *parent);
	~QtUdpHandler();

	//************************************
	// Method:    JoinGroup
	// FullName:  QtUdpHandler::JoinGroup
	// Access:    public 
	// Returns:   void
	// Qualifier: 加入组播组，接受该组播地址端口的消息
	// Parameter: const QString & qsGroupAddr
	// Parameter: qint16 port
	//************************************
	bool JoinGroup(const QString &qsGroupAddr, quint16 port);
	bool LeaveGroup(const QString &qsGroupAddr);

	//************************************
	// Method:    SendUdp
	// FullName:  QtUdpHandler::SendUdp
	// Access:    public 
	// Returns:   void
	// Qualifier: 发送UDP消息
	// Parameter: const QString & qsMsg		-- 消息内容
	// Parameter: const QString qsSendTo	-- 发送目标端口，默认是已加入的组播组地址
	// Parameter: quint16 port				-- 发送目标端口，默认是已绑定的组播组端口
	//************************************
	void SendUdp(const QByteArray &bytes, const QString& qsSendTo = "", quint16 port = 0);

signals:
	void RecvedUdp(const QByteArray &bytes, const QString &qsFrom, const quint16 port);

private slots:
	void RecvUdp();

private:
	bool m_bJoined = false;
	quint16 m_Port = 0;
	QString m_qsGroupAddr;

	QUdpSocket *m_pUdpSocket = Q_NULLPTR;
};
