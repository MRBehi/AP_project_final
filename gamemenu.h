#ifndef GAMEMENU_H
#define GAMEMENU_H

#include <QDialog>
#include <QApplication>
#include "qmessagebox.h"

#include "profile.h"
#include "gamehistory.h"
#include "maingamepage.h"
#include "Channels.h"

class Profile;
class GameHistory;

namespace Ui {
class GameMenu;
}

class GameMenu : public QDialog
{
    Q_OBJECT

public:
    explicit GameMenu(const QString& _username,QWidget *parent = nullptr);
    ~GameMenu();

private slots:
    void on_gameHistoryButton_clicked();

    void on_profileButton_clicked();

    void on_exitButton_clicked();

    void on_startButton_clicked();

private:
    Ui::GameMenu *ui;
    Profile *profile;
    GameHistory *gamehistory;
    QString username;
    MainGamePage *maingame;
    channels *m_channel;
    QTcpSocket *socket = nullptr;
};

#endif // GAMEMENU_H
