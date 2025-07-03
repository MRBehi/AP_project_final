#ifndef CHANNELS_H
#define CHANNELS_H

#include <QObject>
#include <QTcpSocket>

class channels : public QObject
{
    Q_OBJECT  // <--- VERY IMPORTANT

public:
    explicit channels(QTcpSocket* socket, QObject *parent = nullptr);
    ~channels();

    void sendMessage(const QByteArray &data);

signals:
    void messageReceived(const QString &message);        // ✅ public signal
    void clientDisconnected();                           // ✅ public signal

private slots:
    void onReadyRead();
    void onDisconnected();

private:
    QTcpSocket *socket;
};


#endif // CHANNELS_H
