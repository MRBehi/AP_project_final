#ifndef GAMEHISTORY_H
#define GAMEHISTORY_H

#include <QDialog>

#include "gamemenu.h"

namespace Ui {
class GameHistory;
}

class GameHistory : public QDialog
{
    Q_OBJECT

public:
    explicit GameHistory(const QString& _username,GameMenu *parentPage,QWidget *parent = nullptr);
    ~GameHistory();

private slots:
    void on_backButton_clicked();

private:
    Ui::GameHistory *ui;
    GameMenu *gamemenu;

    QString username;
};

#endif // GAMEHISTORY_H
