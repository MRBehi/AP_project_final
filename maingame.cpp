#include "maingame.h"
#include "ui_maingame.h"

MainGame::MainGame(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainGame)
{
    ui->setupUi(this);
}

MainGame::~MainGame()
{
    delete ui;
}
