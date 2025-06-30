/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QHBoxLayout *nameLayout;
    QLabel *nameLabel;
    QLineEdit *nameLine;
    QHBoxLayout *lastnameLayout;
    QLabel *lastnameLabel;
    QLineEdit *lastnameLine;
    QHBoxLayout *phonenoLayout;
    QLabel *phonenoLabel;
    QLineEdit *phonenoLine;
    QHBoxLayout *emailLayout;
    QLabel *emailLabel;
    QLineEdit *emailLine;
    QHBoxLayout *usernameLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameLine;
    QHBoxLayout *passwordLayout;
    QLabel *passwordLabel;
    QLineEdit *passwordLine;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QPushButton *submitButton;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->resize(1254, 628);
        SignUp->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-image: url(:/images/images/any_menu.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-attachment: fixed;\n"
"}"));
        verticalLayoutWidget = new QWidget(SignUp);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(210, 60, 811, 476));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleLabel = new QLabel(verticalLayoutWidget);
        titleLabel->setObjectName("titleLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        titleLabel->setMinimumSize(QSize(250, 50));
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel#titleLabel {\n"
"    font-size: 24px;\n"
"    font-weight: bold;\n"
"    color: #3a7ca5;\n"
"    padding: 12px;\n"
"}"));

        verticalLayout->addWidget(titleLabel);

        nameLayout = new QHBoxLayout();
        nameLayout->setObjectName("nameLayout");
        nameLabel = new QLabel(verticalLayoutWidget);
        nameLabel->setObjectName("nameLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy1);
        nameLabel->setMinimumSize(QSize(100, 0));
        nameLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 14px;\n"
"    color: #444;\n"
"}"));

        nameLayout->addWidget(nameLabel);

        nameLine = new QLineEdit(verticalLayoutWidget);
        nameLine->setObjectName("nameLine");
        nameLine->setMinimumSize(QSize(250, 50));
        nameLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-size: 14px;\n"
"    padding: 6px;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 6px;\n"
"    background-color: white;\n"
"}"));

        nameLayout->addWidget(nameLine);


        verticalLayout->addLayout(nameLayout);

        lastnameLayout = new QHBoxLayout();
        lastnameLayout->setObjectName("lastnameLayout");
        lastnameLabel = new QLabel(verticalLayoutWidget);
        lastnameLabel->setObjectName("lastnameLabel");
        sizePolicy1.setHeightForWidth(lastnameLabel->sizePolicy().hasHeightForWidth());
        lastnameLabel->setSizePolicy(sizePolicy1);
        lastnameLabel->setMinimumSize(QSize(100, 0));
        lastnameLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 14px;\n"
"    color: #444;\n"
"}"));

        lastnameLayout->addWidget(lastnameLabel);

        lastnameLine = new QLineEdit(verticalLayoutWidget);
        lastnameLine->setObjectName("lastnameLine");
        lastnameLine->setMinimumSize(QSize(250, 50));
        lastnameLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-size: 14px;\n"
"    padding: 6px;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 6px;\n"
"    background-color: white;\n"
"}"));

        lastnameLayout->addWidget(lastnameLine);


        verticalLayout->addLayout(lastnameLayout);

        phonenoLayout = new QHBoxLayout();
        phonenoLayout->setObjectName("phonenoLayout");
        phonenoLabel = new QLabel(verticalLayoutWidget);
        phonenoLabel->setObjectName("phonenoLabel");
        sizePolicy1.setHeightForWidth(phonenoLabel->sizePolicy().hasHeightForWidth());
        phonenoLabel->setSizePolicy(sizePolicy1);
        phonenoLabel->setMinimumSize(QSize(100, 0));
        phonenoLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 14px;\n"
"    color: #444;\n"
"}"));

        phonenoLayout->addWidget(phonenoLabel);

        phonenoLine = new QLineEdit(verticalLayoutWidget);
        phonenoLine->setObjectName("phonenoLine");
        phonenoLine->setMinimumSize(QSize(250, 50));
        phonenoLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-size: 14px;\n"
"    padding: 6px;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 6px;\n"
"    background-color: white;\n"
"}"));

        phonenoLayout->addWidget(phonenoLine);


        verticalLayout->addLayout(phonenoLayout);

        emailLayout = new QHBoxLayout();
        emailLayout->setObjectName("emailLayout");
        emailLabel = new QLabel(verticalLayoutWidget);
        emailLabel->setObjectName("emailLabel");
        sizePolicy1.setHeightForWidth(emailLabel->sizePolicy().hasHeightForWidth());
        emailLabel->setSizePolicy(sizePolicy1);
        emailLabel->setMinimumSize(QSize(100, 0));
        emailLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 14px;\n"
"    color: #444;\n"
"}"));

        emailLayout->addWidget(emailLabel);

        emailLine = new QLineEdit(verticalLayoutWidget);
        emailLine->setObjectName("emailLine");
        emailLine->setMinimumSize(QSize(250, 50));
        emailLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-size: 14px;\n"
"    padding: 6px;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 6px;\n"
"    background-color: white;\n"
"}"));

        emailLayout->addWidget(emailLine);


        verticalLayout->addLayout(emailLayout);

        usernameLayout = new QHBoxLayout();
        usernameLayout->setObjectName("usernameLayout");
        usernameLabel = new QLabel(verticalLayoutWidget);
        usernameLabel->setObjectName("usernameLabel");
        sizePolicy1.setHeightForWidth(usernameLabel->sizePolicy().hasHeightForWidth());
        usernameLabel->setSizePolicy(sizePolicy1);
        usernameLabel->setMinimumSize(QSize(100, 0));
        usernameLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 14px;\n"
"    color: #444;\n"
"}"));

        usernameLayout->addWidget(usernameLabel);

        usernameLine = new QLineEdit(verticalLayoutWidget);
        usernameLine->setObjectName("usernameLine");
        usernameLine->setMinimumSize(QSize(250, 50));
        usernameLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-size: 14px;\n"
"    padding: 6px;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 6px;\n"
"    background-color: white;\n"
"}"));

        usernameLayout->addWidget(usernameLine);


        verticalLayout->addLayout(usernameLayout);

        passwordLayout = new QHBoxLayout();
        passwordLayout->setObjectName("passwordLayout");
        passwordLabel = new QLabel(verticalLayoutWidget);
        passwordLabel->setObjectName("passwordLabel");
        sizePolicy1.setHeightForWidth(passwordLabel->sizePolicy().hasHeightForWidth());
        passwordLabel->setSizePolicy(sizePolicy1);
        passwordLabel->setMinimumSize(QSize(100, 0));
        passwordLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 14px;\n"
"    color: #444;\n"
"}"));

        passwordLayout->addWidget(passwordLabel);

        passwordLine = new QLineEdit(verticalLayoutWidget);
        passwordLine->setObjectName("passwordLine");
        passwordLine->setMinimumSize(QSize(250, 50));
        passwordLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-size: 14px;\n"
"    padding: 6px;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 6px;\n"
"    background-color: white;\n"
"}"));

        passwordLayout->addWidget(passwordLine);


        verticalLayout->addLayout(passwordLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        cancelButton = new QPushButton(verticalLayoutWidget);
        cancelButton->setObjectName("cancelButton");
        sizePolicy1.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy1);
        cancelButton->setMinimumSize(QSize(100, 30));
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton#cancelButton {\n"
"    background-color: #ce93d0;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"}\n"
"QPushButton#cancelButton:hover {\n"
"    background-color: #bb7abc;\n"
"}"));

        horizontalLayout->addWidget(cancelButton);

        submitButton = new QPushButton(verticalLayoutWidget);
        submitButton->setObjectName("submitButton");
        sizePolicy1.setHeightForWidth(submitButton->sizePolicy().hasHeightForWidth());
        submitButton->setSizePolicy(sizePolicy1);
        submitButton->setMinimumSize(QSize(100, 35));
        submitButton->setStyleSheet(QString::fromUtf8("QPushButton#submitButton {\n"
"    background-color: #88bfd9;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"}\n"
"QPushButton#submitButton:hover {\n"
"    background-color: #6aaac1;\n"
"}"));

        horizontalLayout->addWidget(submitButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Dialog", nullptr));
        titleLabel->setText(QCoreApplication::translate("SignUp", "Sign Up", nullptr));
        nameLabel->setText(QCoreApplication::translate("SignUp", "Name:", nullptr));
        lastnameLabel->setText(QCoreApplication::translate("SignUp", "Last name:", nullptr));
        phonenoLabel->setText(QCoreApplication::translate("SignUp", "Phone No:", nullptr));
        emailLabel->setText(QCoreApplication::translate("SignUp", "Email:", nullptr));
        usernameLabel->setText(QCoreApplication::translate("SignUp", "Username:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("SignUp", "Password:", nullptr));
        cancelButton->setText(QCoreApplication::translate("SignUp", "Cancel", nullptr));
        submitButton->setText(QCoreApplication::translate("SignUp", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
