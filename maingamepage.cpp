#include "MainGamePage.h"
#include "ui_MainGamePage.h"
#include <QMessageBox>
#include <QDebug>

MainGamePage::MainGamePage(const QString &playerName, QTcpSocket *socket, QWidget *parent)
    : QDialog(parent), ui(new Ui::MainGamePage),
    m_deck(new Deck), m_selectedButton(nullptr)
{
    ui->setupUi(this);
    ui->labelPlayerName->setText("Player: " + playerName);
    ui->labelOpponent->setText("Opponent: Waiting");

    m_channel = new channels(socket, this);
    connect(m_channel, &channels::messageReceived, this, &MainGamePage::onMessageReceived);
    connect(m_channel, &channels::clientDisconnected, this, &MainGamePage::onClientDisconnected);

    dealCards();
    connect(ui->btnExit, &QPushButton::clicked, this, &MainGamePage::onConfirmClicked);
    connect(ui->btnStop, &QPushButton::clicked, this, &MainGamePage::onStopClicked);
    connect(ui->btnExit, &QPushButton::clicked, this, &MainGamePage::close);
}

MainGamePage::~MainGamePage() {
    delete ui;
}

void MainGamePage::dealCards() {
    for (int i = 0; i < 7; ++i) {
        Card *c = m_deck->deal();
        if (!c) break;
        c->setFaceUp(true);
        QPushButton *btn = c;
        btn->setStyleSheet("border:2px solid white;");
        ui->cardContainer->addWidget(btn, 0, i);
        connect(btn, &QPushButton::clicked, this, [=]{ selectCard(c->name(), btn); });
        m_hand.append(c);
    }
}

void MainGamePage::selectCard(const QString &name, QPushButton *btn) {
    m_selected = name;
    ui->labelSelected->setText("Selected: " + name);
    if (m_selectedButton)
        m_selectedButton->setStyleSheet("border:2px solid white;");
    m_selectedButton = btn;
    m_selectedButton->setStyleSheet("border:3px solid green;");
}

void MainGamePage::onConfirmClicked() {
    if (m_selected.isEmpty()) {
        QMessageBox::warning(this, "Select Card", "Please select a card first!");
        return;
    }
    m_channel->sendMessage(("SELECT:" + m_selected).toUtf8());
    QMessageBox::information(this, "Confirmed", "Sent: " + m_selected);

    for (auto *btn : m_hand)
        if (btn != m_selectedButton)
            btn->hide();
}

void MainGamePage::onStopClicked() {
    if (ui->btnStop->text() == "Stop") {
        ui->btnStop->setText("Resume");
        m_channel->sendMessage("PAUSE");
    } else {
        ui->btnStop->setText("Stop");
        m_channel->sendMessage("RESUME");
    }
}

void MainGamePage::onMessageReceived(const QString &msg) {
    qDebug() << "From server:" << msg;
    if (msg.startsWith("OPPONENT:"))
        ui->labelOpponent->setText("Opponent: " + msg.mid(9));
    // expand parsing for game flow: rounds, swap, win/loss, etc.
}

void MainGamePage::onClientDisconnected() {
    QMessageBox::warning(this, "Disconnected", "Opponent left.");
    close();
}
