#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>

#include "welcomepage.h"
#include "UserStorage.h"
#include "gamemenu.h"

namespace Ui {
class SignUp;
}

class SignUp : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp(WelcomePage* parentPage, QWidget *parent = nullptr);
    ~SignUp();

private slots:
    void on_cancelButton_clicked();

    void on_submitButton_clicked();

private:
    Ui::SignUp *ui;
    WelcomePage *welcome;
    GameMenu *gamemenu;
};

#endif // SIGNUP_H
