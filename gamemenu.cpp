#include "gamemenu.h"
#include "ui_gamemenu.h"

gamemenu::gamemenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::gamemenu)
{
    ui->setupUi(this);
}

gamemenu::~gamemenu()
{
    delete ui;
}
