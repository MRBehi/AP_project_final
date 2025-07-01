#ifndef PROFILE_H
#define PROFILE_H

#include <QDialog>

#include "gamemenu.h"
class GameMenu;

namespace Ui {
class Profile;
}

class Profile : public QDialog
{
    Q_OBJECT

public:
    explicit Profile(const QString& _username, GameMenu *parentPage, QWidget *parent = nullptr);
    ~Profile();
    void loadUserData();

private slots:
    void on_cancelButton_clicked();

    void on_EditButtom_clicked();

private:
    Ui::Profile *ui;
    GameMenu *gamemenu;

    QString username;
    QString oldHashedPassword;
};

#endif // PROFILE_H
