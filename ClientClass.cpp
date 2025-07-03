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

    ConnectToServer();
}

ClientClass::~ClientClass()
{
    delete ui;
}

void ClientClass::ConnectToServer() {
    socket->connectToHost("192.168.1.5", 9001);  // Replace with your actual server IP
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
    QString message = ui->lineEdit->text();
    qDebug() << "The written message was: " << message;

    welcomePage = new WelcomePage();
    welcomePage->show();
    this->hide();
    // You can add logic here later to send a message to the server
}
