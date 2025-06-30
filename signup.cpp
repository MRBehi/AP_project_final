#include "signup.h"
#include "ui_signup.h"

SignUp::SignUp(WelcomePage* parentPage, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignUp) , welcome(parentPage)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_cancelButton_clicked()
{
    this->hide();
    welcome->show();
}


void SignUp::on_submitButton_clicked()
{
    QString name = ui->nameLine->text();
    QString lastname = ui->lastnameLine->text();
    QString phone = ui->phonenoLine->text();
    QString email = ui->emailLine->text();
    QString username = ui->usernameLine->text();
    QString password = ui->passwordLine->text();

    if (name.isEmpty() || lastname.isEmpty() || phone.isEmpty() ||
        email.isEmpty() || username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Incomplete", "Fill all the blanks.");
        return;
    }

    bool success = UserStorage::saveUser(name, lastname, phone, email, username, password);
    if (success) {
        QMessageBox::information(this, "Success", "Signed Up successfully!");

        gamemenu = new GameMenu(username);
        gamemenu->show();
        this->hide();
    } else {
        QMessageBox::critical(this, "Error", "Signed Up unsuccesfully");
    }
}

