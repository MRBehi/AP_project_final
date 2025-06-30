#include "forgotpassword.h"
#include "ui_forgotpassword.h"
#include <QMessageBox>

ForgotPassword::ForgotPassword(LogIn *parentPage, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ForgotPassword)
    , login(parentPage)
{
    ui->setupUi(this);
}

ForgotPassword::~ForgotPassword()
{
    delete ui;
}

void ForgotPassword::on_cancelButton_clicked()
{
    this->hide();
    login->show();
}

void ForgotPassword::on_submitButton_clicked()
{
    QString phone = ui->phoneLineEdit->text().trimmed();

    if (phone.isEmpty()) {
        QMessageBox::warning(this, "Invalid input", "Fill the blank.");
        return;
    }

    if (UserStorage::phoneExists(phone)) {
        QString username = UserStorage::findUsernameByPhone(phone);

        if (!username.isEmpty()) {
            QMessageBox::information(this, "Valid phone number", "Phone number found!");

            gamemenu = new GameMenu(username, this);
            gamemenu->show();
            this->hide();
        } else {
            QMessageBox::critical(this, "Error", "User not found.");
        }

    } else {
        QMessageBox::critical(this, "Error", "Phone number not found!");
    }
}
