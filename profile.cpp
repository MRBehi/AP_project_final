    #include "profile.h"
    #include "ui_profile.h"
    #include <QMessageBox>
    #include "userstorage.h"
    Profile::Profile(const QString& _username, GameMenu *parentPage, QWidget *parent)
        : QDialog(parent)
        , ui(new Ui::Profile)
        , gamemenu(parentPage)
        , username(_username)
    {
        ui->setupUi(this);
        loadUserData();
    }

    Profile::~Profile()
    {
        delete ui;
    }

    void Profile::on_cancelButton_clicked()
    {
        gamemenu->show();
        this->hide();
    }

    void Profile::on_EditButtom_clicked()
    {
        QString newName = ui->nameLine->text().trimmed();
        QString newLastName = ui->lastnameLine->text().trimmed();
        QString newPhone = ui->phonenoLine->text().trimmed();
        QString newEmail = ui->emailLine->text().trimmed();

        if (newName.isEmpty() || newLastName.isEmpty() || newPhone.isEmpty() || newEmail.isEmpty()) {
            QMessageBox::warning(this, "Incomplete Data", "Please fill all fields.");
            return;
        }

        QStringList newFields = {
            username,
            oldHashedPassword,
            newName,
            newLastName,
            newPhone,
            newEmail
        };

        if (UserStorage::updateUserProfile(username, newFields)) {
            QMessageBox::information(this, "Success", "Profile edited!");
            this->hide();
            gamemenu->show();
        } else {
            QMessageBox::critical(this, "Error", "Could not update profile.");
        }
    }

    void Profile::loadUserData()
    {
        QStringList fields;
        if (UserStorage::loadUserProfile(username, fields)) {
            if (fields.size() >= 6) {
                oldHashedPassword = fields[1];
                ui->nameLine->setText(fields[2]);
                ui->lastnameLine->setText(fields[3]);
                ui->phonenoLine->setText(fields[4]);
                ui->emailLine->setText(fields[5]);
            } else {
                QMessageBox::critical(this, "Error", "User data corrupted!");
                this->close();
            }
        } else {
            QMessageBox::critical(this, "Error", "User not found!");
            this->close();
        }
    }
