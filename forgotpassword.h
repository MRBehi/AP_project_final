#ifndef FORGOTPASSWORD_H
#define FORGOTPASSWORD_H

#include <QDialog>
#include <QMessageBox>
#include "login.h"
#include "gamemenu.h"
class Login;

namespace Ui {
class ForgotPassword;
}

class ForgotPassword : public QDialog
{
    Q_OBJECT

public:
    explicit ForgotPassword(LogIn *parentPage,  QWidget *parent = nullptr);
    ~ForgotPassword();

private slots:
    void on_cancelButton_clicked();

    void on_submitButton_clicked();

private:
    Ui::ForgotPassword *ui;
    LogIn *login;
    GameMenu *gamemenu;
};

#endif // FORGOTPASSWORD_H
