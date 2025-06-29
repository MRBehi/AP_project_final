#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    backgroundLabel = new QLabel(this);
    backgroundLabel->setPixmap(QPixmap(":/images/mainmenu.png"));
    backgroundLabel->setScaledContents(true);
    backgroundLabel->lower();

    backgroundLabel->resize(this->size());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *event) {
    QMainWindow::resizeEvent(event);
    if (backgroundLabel)
        backgroundLabel->resize(this->size());
}
