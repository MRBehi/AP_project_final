#ifndef CLIENTCLASS_H
#define CLIENTCLASS_H

#include <QDialog>
#include <QTcpSocket>
#include "welcomepage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ClientClass; }
QT_END_NAMESPACE

class ClientClass : public QDialog
{
    Q_OBJECT

public:
    explicit ClientClass(QWidget *parent = nullptr);
    ~ClientClass();

private slots:
    void on_pushButton_clicked();      // For sending message
    void onReadyRead();                // Handle incoming messages
    void readsocket();
    void connectToServer();

private:
    Ui::ClientClass *ui;
    QTcpSocket *socket;
    WelcomePage *welcomePage;
};

#endif // CLIENTCLASS_H
