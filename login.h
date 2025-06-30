#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

#include "welcomepage.h"
#include "forgotpassword.h"
#include "gamemenu.h"

class WelcomePage;

namespace Ui {
class LogIn;
}

class LogIn : public QDialog
{
    Q_OBJECT

public:
    explicit LogIn(WelcomePage* parentPage, QWidget *parent = nullptr);
    ~LogIn();

private slots:
    void on_lgcancelButton_clicked();

    void on_forgetpasswordButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::LogIn *ui;
    WelcomePage *welcome;
    ForgotPassword *forgot;
    GameMenu *gamemenu;
};

#endif // LOGIN_H
