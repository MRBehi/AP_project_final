#include "clientclass.h"
#include "ui_clientclass.h"
#include <QMessageBox>
#include "Channels.h"

channels::Channels(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ClientClass)
    , socket(new QTcpSocket(this))
{
    ui->setupUi(this);
    socket->connectToHost("127.0.0.1", 8080); // Replace with actual server IP if needed

    connect(socket, &QTcpSocket::readyRead, this, &ClientClass::onReadyRead);
    connect(socket, &QTcpSocket::disconnected, [](){
        qDebug() << "Disconnected from server.";
    });
}

channels::~ClientClass()
{
    delete ui;
}

void channels::on_pushButton_clicked()
{
    QString message = ui->lineEdit->text().trimmed();
    if (!message.isEmpty() && socket->state() == QTcpSocket::ConnectedState) {
        socket->write(message.toUtf8());
        ui->lineEdit->clear();
    }
}

void channels::onReadyRead()
{
    QByteArray incoming = socket->readAll();
    ui->textEdit->append(QString::fromUtf8(incoming));
}
