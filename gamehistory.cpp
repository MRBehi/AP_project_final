#include "gamehistory.h"
#include "ui_gamehistory.h"
#include "gamemenu.h"

GameHistory::GameHistory(const QString& _username, GameMenu *parentPage,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GameHistory) , gamemenu(parentPage), username(_username)
{
    ui->setupUi(this);
}

GameHistory::~GameHistory()
{
    delete ui;
}

void GameHistory::on_backButton_clicked()
{
    gamemenu->show();
    this->hide();
}

