#include "login.h"
#include "ui_login.h"

LogIn::LogIn(WelcomePage* parentPage,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LogIn) , welcome(parentPage)
{
    ui->setupUi(this);
    forgot = new ForgotPassword(this);
}

LogIn::~LogIn()
{
    delete ui;
}

void LogIn::on_lgcancelButton_clicked()
{
    this->hide();
    welcome->show();
}


void LogIn::on_forgetpasswordButton_clicked()
{
    forgot->show();
    this->hide();
}


void LogIn::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Invalid log in", "Fill all the blanks.");
        return;
    }

    if (UserStorage::loginUser(username, password)) {
        QMessageBox::information(this, "Successful log in", "Log In successfuly!");

        gamemenu = new GameMenu(username);
        gamemenu->show();
        this->hide();
    } else {
        QMessageBox::critical(this, "Error", "Username or password is not correct.");
    }
}

