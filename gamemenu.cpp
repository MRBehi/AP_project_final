#include "gamemenu.h"
#include "ui_gamemenu.h"

GameMenu::GameMenu(const QString& _username, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GameMenu)
    , username(_username)
{
    ui->setupUi(this);
    profile = new Profile(username, this);
    gamehistory = new GameHistory(username, this);

    m_channel = new channels(socket, this);
    connect(m_channel, SIGNAL(messageReceived(QString)),
            this, SLOT(onMessageReceived(QString)));

    connect(m_channel, SIGNAL(clientDisconnected()),
            this, SLOT(onClientDisconnected()));


}

GameMenu::~GameMenu()
{
    delete profile;
    delete gamehistory;
    delete ui;
}

void GameMenu::on_gameHistoryButton_clicked()
{
    gamehistory->show();
    this->hide();
}

void GameMenu::on_profileButton_clicked()
{
    profile->loadUserData();
    profile->show();
    this->hide();
}

void GameMenu::on_exitButton_clicked()
{
    qApp->quit();
}

void GameMenu::on_startButton_clicked()
{
    QTcpSocket *socket = new QTcpSocket(this);
    socket->connectToHost("192.168.1.X", 9001);  // <-- use the actual server IP shown on the label

    if (!socket->waitForConnected(3000)) {
        QMessageBox::warning(this, "Connection Failed", "Cannot connect to server");
        delete socket;
        return;
    }

    MainGamePage *gamePage = new MainGamePage(username, socket);
    gamePage->show();
    this->hide();

}

