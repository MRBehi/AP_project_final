#include "ServerClass.h"
#include "ui_serverclass.h"
#include <QDebug>
#include <QNetworkInterface>
#include <QHostInfo>

//  Utility to get local WiFi IP address
QString getWifiIPv4Address() {
    QString wifiIPv4;
    QList<QNetworkInterface> interfaces = QNetworkInterface::allInterfaces();
    for (const QNetworkInterface& iface : interfaces) {
        if (iface.flags().testFlag(QNetworkInterface::IsUp) &&
            iface.flags().testFlag(QNetworkInterface::IsRunning) &&
            !iface.flags().testFlag(QNetworkInterface::IsLoopBack)) {

            for (const QNetworkAddressEntry& entry : iface.addressEntries()) {
                if (entry.ip().protocol() == QAbstractSocket::IPv4Protocol) {
                    if (iface.humanReadableName().contains("wlan", Qt::CaseInsensitive) ||
                        iface.humanReadableName().contains("wi-fi", Qt::CaseInsensitive) ||
                        iface.humanReadableName().contains("wireless", Qt::CaseInsensitive)) {
                        return entry.ip().toString();
                    }
                }
            }
        }
    }
    return QString();
}

//  Constructor
ServerClass::ServerClass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ServerClass)
    , server(new QTcpServer(this))

{
    ui->setupUi(this);
    setWindowTitle("Server");

    QString ip = getWifiIPv4Address();
    ui->label_3->setText(ip.isEmpty() ? "IP not found" : ip);

    if (server->listen(QHostAddress::Any, 8080)) {
        connect(server, &QTcpServer::newConnection, this, &ServerClass::handleNewConnection);
        ui->label_4->setText("Waiting for connections...");
    } else {
        ui->label_4->setText("Server failed to start");
        qDebug() << "Error starting server:" << server->errorString();
    }
}

//  Handle incoming connections
void ServerClass::handleNewConnection() {
    while (server->hasPendingConnections()) {
        QTcpSocket* newSocket = server->nextPendingConnection();
        channels* clientChannel = new channels(newSocket, this);
        clients.append(clientChannel);
        ui->label_4->setText(QString("Clients connected: %1").arg(clients.size()));
    }
}

//  Destructor
ServerClass::~ServerClass()
{
    delete ui;
}
