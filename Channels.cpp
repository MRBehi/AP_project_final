#include "channels.h"
#include <QDebug>

channels::channels(QTcpSocket* socket, QObject *parent)
    : QObject(parent), socket(socket)
{
    connect(socket, &QTcpSocket::readyRead, this, &channels::onReadyRead);
    connect(socket, &QTcpSocket::disconnected, this, &channels::onDisconnected);
}

channels::~channels()
{
    if (socket) {
        socket->disconnectFromHost();
        socket->deleteLater();
    }
}

void channels::onReadyRead()
{
    QByteArray data = socket->readAll();
    QString message = QString::fromUtf8(data);
    qDebug() << "Message received from client:" << message;

    emit messageReceived(message);

    // Optional: Echo back to client
    socket->write(QString("Echo: " + message).toUtf8());
}

void channels::onDisconnected()
{
    qDebug() << "Client disconnected.";
    emit clientDisconnected();
}

void channels::sendMessage(const QByteArray &data) {
    if (socket && socket->isOpen()) {
        socket->write(data);
    }
}
