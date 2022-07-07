/*!
 * \file QtUdpHandler.h
 *
 * \author daiweiheng
 * \date ���� 2021
 *
 * ����֧��QT�µ�UDP���䣬ʹ�ô���ǰ��Ҫ����Ŀ���������networkģ��֧��
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
	// Qualifier: �����鲥�飬���ܸ��鲥��ַ�˿ڵ���Ϣ
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
	// Qualifier: ����UDP��Ϣ
	// Parameter: const QString & qsMsg		-- ��Ϣ����
	// Parameter: const QString qsSendTo	-- ����Ŀ��˿ڣ�Ĭ�����Ѽ�����鲥���ַ
	// Parameter: quint16 port				-- ����Ŀ��˿ڣ�Ĭ�����Ѱ󶨵��鲥��˿�
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
