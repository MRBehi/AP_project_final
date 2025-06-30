#include "ClientClass.h"
#include "ui_ClientClass.h"

ClientClass::ClientClass(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ClientClass)
{
    ui->setupUi(this);

    setWindowTitle("Client");

    socket = new QTcpSocket(this);
    connect(socket, &QTcpSocket::readyRead, this, &ClientClass::readsocket);

}

ClientClass::~ClientClass()
{
    delete ui;
}

void ClientClass::ConnectToServer() {
    socket->connectToHost("127.0.0.1", 1234);  // Use localhost and port matching server
    if (socket->waitForConnected(3000)) {
        qDebug() << "Connected to server!";
    } else {
        qDebug() << "Connection failed:" << socket->errorString();
    }
}

void ClientClass::readsocket() {
    QByteArray data = socket->readAll();
    QString message = QString::fromUtf8(data);
    qDebug() << "Received from server:" << message;
}

void ClientClass::on_pushButton_clicked() {
    // For now, just log something simple
    qDebug() << "Send button clicked!";
    welcomePage = new WelcomePage();
    welcomePage->show();
    this->hide();
    // You can add logic here later to send a message to the server
}
