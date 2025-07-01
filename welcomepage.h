#ifndef WELCOMEPAGE_H
#define WELCOMEPAGE_H

#include <QDialog>

#include "login.h"
#include "signup.h"

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
    class SignUp *signUpPage;
    class LogIn *logInPage;
};

#endif // WELCOMEPAGE_H
