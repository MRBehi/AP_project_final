#ifndef CLIENTCLASS_H
#define CLIENTCLASS_H

#include <QDialog>
#include <QTcpSocket>

namespace Ui {
class ClientClass;
}

class ClientClass : public QDialog
{
    Q_OBJECT

public:
    explicit ClientClass(QWidget *parent = nullptr);
    ~ClientClass();

private:
    Ui::ClientClass *ui;
    QTcpSocket* socket;

public slots:
    void ConnectToServer();
    void readsocket();

private slots:
    void on_pushButton_clicked();

};

#endif // CLIENTCLASS_H
