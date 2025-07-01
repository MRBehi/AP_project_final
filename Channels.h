#ifndef CHANNELS_H
#define CHANNELS_H

#include <QObject>
#include <QTcpSocket>

class channels : public QObject
{
    Q_OBJECT
public:
    explicit channels(QTcpSocket* socket, QObject *parent = nullptr);
    ~channels();

signals:
    void messageReceived(const QString &message);
    void clientDisconnected();

private slots:
    void onReadyRead();
    void onDisconnected();

private:
    QTcpSocket *socket;
};

#endif // CHANNELS_H
