#ifndef SERVERCLASS_H
#define SERVERCLASS_H

#include "Channels.h"
#include <QList>
#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>

namespace Ui {
class ServerClass;
}

class ServerClass : public QMainWindow
{
    Q_OBJECT

public:
    explicit ServerClass(QWidget *parent = nullptr);
    ~ServerClass();

public slots:
    void handleNewConnection();

private:
    QTcpServer *server;
    QList<channels*> clients;  // Now safely scoped inside the class
    Ui::ServerClass *ui;
};

#endif // SERVERCLASS_H
