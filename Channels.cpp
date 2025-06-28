#include "Channels.h"
#include <QDebug>

channels::channels(QTcpSocket* _socket, QObject* parent)
    : QObject(parent), socket(_socket) {

    // Print when a new channel is created
    qDebug() << "New client channel initialized.";

    // Connect the socket's readyRead signal to our custom slot
    connect(socket, &QTcpSocket::readyRead, this, &channels::onReadyRead);

    // Handle client disconnection
    connect(socket, &QTcpSocket::disconnected, this, &channels::onClientDisconnected);
}

void channels::onReadyRead() {
    QByteArray data = socket->readAll();
    QString message = QString::fromUtf8(data);
    qDebug() << "Client sent:" << message;

    // Echo it back for now (you'll replace this with poker logic later)
    socket->write("Server received: " + message.toUtf8());
}

void channels::onClientDisconnected() {
    qDebug() << "Client disconnected.";
    socket->deleteLater();  // Clean up the socket
    this->deleteLater();    // Clean up the channel object
}
