/*!
 * \file QtTcpClientHandler.h
 *
 * \author Leventure
 * \date 四月 2022
 *
 * 用于支持QT下的TCP客户端端应用，使用此类前需要在项目属性中添加network模块支持
 */
#pragma once
#include "../../lgqtnetwork_global.h"

#include <QObject>
#include <QtNetwork/QHostAddress>
#include <QtNetwork/QTcpSocket>

class Q_DECL_EXPORT QtTcpClientHandler : public QObject
{
	Q_OBJECT

public:
	QtTcpClientHandler(QObject *parent);
	~QtTcpClientHandler();

	void Open(const QString &qsServerAddr, const quint16 serverPort);
	void Close();
	void SendMsg(const QByteArray &bytes);

Q_SIGNALS:
	void Connected(const QString &qsServerAddr, const quint16 nServerPort);
	void Disconnect(const QString &qsServerAddr, const quint16 nServerPort);
	void RecvTCP(const QByteArray& bytes);

private slots:
	void ConnectedServer();
	void DisConnectedServer();
	void RecvMsg();

private:
	qint64 m_nRecvedSize = 0;
	quint16 m_nServerPort = 0;
	QString m_qsServerAddr;
	QTcpSocket *m_pTcpSocket = Q_NULLPTR;
};
