/*!
 * \file QtTCPServerHandler.h
 *
 * \author daiweiheng
 * \date ���� 2021
 *
 * ����֧��QT�µ�TCP�����Ӧ�ã�ʹ�ô���ǰ��Ҫ����Ŀ����������networkģ��֧��
 */
#pragma once
#include "../../lgqtnetwork_global.h"

#include <QObject>
#include <QHash>
#include <QMutex>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>

struct ClnInfo
{
	qint64 nRecvedMsgLen = 0;
	QString qsAddr;	// ��ַ��ʱ��ȡ��������˿�һ��ֵ����¼
	QTcpSocket *pTcpSocket = Q_NULLPTR;
};

class Q_DECL_EXPORT QtTCPServerHandler : public QObject
{
	Q_OBJECT

public:
	QtTCPServerHandler(QObject *parent);
	~QtTCPServerHandler();

	quint16 ServerPort();

	bool Open(const quint16 port);
	void Close();

	quint16 ConnectCount();

	void CloseAllConn();

	// ������Ϣ
	// bytes����Ϣ����
	// clnAddr��Ŀ���ַ��������գ�����������ӵĿͻ��˷���
	// clnPort��Ŀ��ʹ�õĶ˿ڣ������0���������з��ϵ�ֵַ�Ŀͻ��˽��з���
	void SendMsg(const QByteArray &bytes, QString clnAddr = "", quint16 clnPort = 0);

Q_SIGNALS:
	void NewConn(const QString &clnAddr, const quint16 clnPort, const quint16 port);
	void NewDisConn(const QString &clnAddr, const quint16 clnPort);
	void NewDisConnEx(const QString &clnAddr, const quint16 clnPort, QString errString);
	void RecvClnMsg(const QString &clnAddr, const quint16 clnPort, const QByteArray &bytes);

private slots:
	void NewConn();
	void NewDisConn();
	void RecvClnMsg();

private:
	QObject *m_pParent = Q_NULLPTR;
	QTcpServer* m_pTcpServer = Q_NULLPTR;	// ���ݶ˿�ֵӳ��ķ����socket��Ϣ
	QHash<quint16, ClnInfo*> m_qhsSocketCln;		// ��QTcpSocketʵ����ַӳ�䵽��socket��Ϣ
	QMutex m_qmtForqhsSocketCln;
};