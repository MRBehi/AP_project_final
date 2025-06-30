#ifndef WELCOMEPAGE_H
#define WELCOMEPAGE_H

#include <QDialog>

#include "signup.h"
#include "login.h"

namespace Ui {
class WelcomePage;
}

class WelcomePage : public QDialog
{
    Q_OBJECT

public:
    explicit WelcomePage(QWidget *parent = nullptr);
    ~WelcomePage();

private slots:
    void on_signupButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::WelcomePage *ui;
    SignUp *signUpPage;
    LogIn *logInPage;
};

#endif // WELCOMEPAGE_H
