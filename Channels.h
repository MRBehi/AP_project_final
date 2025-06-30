#ifndef CHANNELS_H
#define CHANNELS_H

#include <QObject>
#include <QTcpSocket>
#include <thread>

class channels : public QObject
{
    Q_OBJECT
public:
    channels(QTcpSocket* _socket,QObject *parent = nullptr);

signals:

private:
    QTcpSocket *socket;

// private slots:
//     void onReadyRead();
//     void onClientDisconnected();

};

#endif // CHANNELS_H
