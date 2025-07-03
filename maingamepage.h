#ifndef MAINGAMEPAGE_H
#define MAINGAMEPAGE_H

#include <QDialog>
#include <QTcpSocket>
#include <QPushButton>
#include "deck.h"
#include "channels.h"

namespace Ui {
class MainGamePage;
}

class MainGamePage : public QDialog
{
    Q_OBJECT

public:
    explicit MainGamePage(const QString &playerName, QTcpSocket *socket, QWidget *parent = nullptr);
    ~MainGamePage();

private:
    Ui::MainGamePage *ui;
    Deck *m_deck;
    QVector<Card*> m_hand;
    QString m_selected;
    QPushButton *m_selectedButton;

    channels *m_channel;

    void dealCards();
    void selectCard(const QString &name, QPushButton *btn);

private slots:
    void onConfirmClicked();
    void onStopClicked();
    void onMessageReceived(const QString &msg);   // ✅ This must match the signal signature
    void onClientDisconnected();                  // ✅ No args here
};

#endif // MAINGAMEPAGE_H
