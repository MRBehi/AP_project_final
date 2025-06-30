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
    profile->loadUserData(); // حتما اطلاعات پروفایل را لود کن قبل از نمایش
    profile->show();
    this->hide();
}

void GameMenu::on_exitButton_clicked()
{
    qApp->quit();
}
