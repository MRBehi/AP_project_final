#include "welcomepage.h"
#include "ui_welcomepage.h"

WelcomePage::WelcomePage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomePage)
{
    ui->setupUi(this);

    logInPage = new LogIn(this);
    signUpPage = new SignUp(this);
}

WelcomePage::~WelcomePage()
{
    delete ui;
}

void WelcomePage::on_signupButton_clicked()
{
    signUpPage->show();
    this->hide();
}

void WelcomePage::on_loginButton_clicked()
{
    logInPage->show();
    this->hide();  // اصلاح: اضافه کردن پرانتز
}
