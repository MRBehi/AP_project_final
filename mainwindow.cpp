#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ClientClass.h"
#include "ServerClass.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)  // Correct UI class
{
    ui->setupUi(this);
    setWindowTitle("Poker Game Launcher");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BTN_client_clicked()
{
    ClientClass* client = new ClientClass();
    client->show();
    this->close(); // or hide() if you want to show it again later
}

void MainWindow::on_BTN_server_clicked()
{
    ServerClass* server = new ServerClass();
    server->show();
    this->close();
}
