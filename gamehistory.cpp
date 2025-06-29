#include "gamehistory.h"
#include "ui_gamehistory.h"

gamehistory::gamehistory(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::gamehistory)
{
    ui->setupUi(this);
}

gamehistory::~gamehistory()
{
    delete ui;
}
