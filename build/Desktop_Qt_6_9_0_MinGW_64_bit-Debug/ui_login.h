/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_LogIn
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lgtitleLabel;
    QHBoxLayout *lgusernameLayout;
    QLabel *lgusernameLabel;
    QLineEdit *lgusernameLine;
    QHBoxLayout *lgpasswordLayout;
    QLabel *lgpasswordLabel;
    QLineEdit *lgpasswordLine;
    QPushButton *forgetpasswordButton;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *lgcancelButton;
    QPushButton *loginButton;

    void setupUi(QDialog *LogIn)
    {
        if (LogIn->objectName().isEmpty())
            LogIn->setObjectName("LogIn");
        LogIn->resize(1167, 564);
        LogIn->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-image: url(:/images/images/any_menu.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-attachment: fixed;\n"
"}"));
        verticalLayoutWidget = new QWidget(LogIn);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(260, 110, 631, 331));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lgtitleLabel = new QLabel(verticalLayoutWidget);
        lgtitleLabel->setObjectName("lgtitleLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lgtitleLabel->sizePolicy().hasHeightForWidth());
        lgtitleLabel->setSizePolicy(sizePolicy);
        lgtitleLabel->setMinimumSize(QSize(250, 50));
        lgtitleLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 24px;\n"
"    font-weight: bold;\n"
"    color: #3a7ca5;\n"
"    padding: 12px;\n"
"}"));

        verticalLayout->addWidget(lgtitleLabel);

        lgusernameLayout = new QHBoxLayout();
        lgusernameLayout->setObjectName("lgusernameLayout");
        lgusernameLabel = new QLabel(verticalLayoutWidget);
        lgusernameLabel->setObjectName("lgusernameLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lgusernameLabel->sizePolicy().hasHeightForWidth());
        lgusernameLabel->setSizePolicy(sizePolicy1);
        lgusernameLabel->setMinimumSize(QSize(100, 0));
        lgusernameLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 14px;\n"
"    color: #444;\n"
"}"));

        lgusernameLayout->addWidget(lgusernameLabel);

        lgusernameLine = new QLineEdit(verticalLayoutWidget);
        lgusernameLine->setObjectName("lgusernameLine");
        lgusernameLine->setMinimumSize(QSize(250, 50));
        lgusernameLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-size: 14px;\n"
"    padding: 6px;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 6px;\n"
"    background-color: white;\n"
"}"));

        lgusernameLayout->addWidget(lgusernameLine);


        verticalLayout->addLayout(lgusernameLayout);

        lgpasswordLayout = new QHBoxLayout();
        lgpasswordLayout->setObjectName("lgpasswordLayout");
        lgpasswordLabel = new QLabel(verticalLayoutWidget);
        lgpasswordLabel->setObjectName("lgpasswordLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lgpasswordLabel->sizePolicy().hasHeightForWidth());
        lgpasswordLabel->setSizePolicy(sizePolicy2);
        lgpasswordLabel->setMinimumSize(QSize(100, 0));
        lgpasswordLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 14px;\n"
"    color: #444;\n"
"}"));

        lgpasswordLayout->addWidget(lgpasswordLabel);

        lgpasswordLine = new QLineEdit(verticalLayoutWidget);
        lgpasswordLine->setObjectName("lgpasswordLine");
        lgpasswordLine->setMinimumSize(QSize(250, 50));
        lgpasswordLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-size: 14px;\n"
"    padding: 6px;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 6px;\n"
"    background-color: white;\n"
"}\n"
""));

        lgpasswordLayout->addWidget(lgpasswordLine);


        verticalLayout->addLayout(lgpasswordLayout);

        forgetpasswordButton = new QPushButton(verticalLayoutWidget);
        forgetpasswordButton->setObjectName("forgetpasswordButton");
        forgetpasswordButton->setStyleSheet(QString::fromUtf8("QPushButton#forgetpasswordButton {\n"
"    background-color: transparent;\n"
"    color: #2a5d7d;\n"
"    font-size: 14px;\n"
"    border: 2px solid #88bfd9;\n"
"    border-radius: 6px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton#forgetpasswordButton:hover {\n"
"    background-color: #e1f1f8;\n"
"    color: #1f4e6d;\n"
"}\n"
"\n"
"QPushButton#forgetpasswordButton:pressed {\n"
"    background-color: #cbdce7;\n"
"}"));

        verticalLayout->addWidget(forgetpasswordButton);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lgcancelButton = new QPushButton(verticalLayoutWidget);
        lgcancelButton->setObjectName("lgcancelButton");
        sizePolicy2.setHeightForWidth(lgcancelButton->sizePolicy().hasHeightForWidth());
        lgcancelButton->setSizePolicy(sizePolicy2);
        lgcancelButton->setMinimumSize(QSize(100, 35));
        lgcancelButton->setStyleSheet(QString::fromUtf8("QPushButton#lgcancelButton {\n"
"    background-color: #ce93d0;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"}\n"
"QPushButton#lgcancelButton:hover {\n"
"    background-color: #bb7abc;\n"
"}"));

        horizontalLayout_4->addWidget(lgcancelButton);

        loginButton = new QPushButton(verticalLayoutWidget);
        loginButton->setObjectName("loginButton");
        sizePolicy2.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy2);
        loginButton->setMinimumSize(QSize(100, 35));
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton#loginButton {\n"
"    background-color: #88bfd9;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"}\n"
"QPushButton#loginButton:hover {\n"
"    background-color: #6aaac1;\n"
"}"));

        horizontalLayout_4->addWidget(loginButton);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(LogIn);

        QMetaObject::connectSlotsByName(LogIn);
    } // setupUi

    void retranslateUi(QDialog *LogIn)
    {
        LogIn->setWindowTitle(QCoreApplication::translate("LogIn", "Dialog", nullptr));
        lgtitleLabel->setText(QCoreApplication::translate("LogIn", "Log In", nullptr));
        lgusernameLabel->setText(QCoreApplication::translate("LogIn", "Username:", nullptr));
        lgpasswordLabel->setText(QCoreApplication::translate("LogIn", "Password:", nullptr));
        forgetpasswordButton->setText(QCoreApplication::translate("LogIn", "Forgot password", nullptr));
        lgcancelButton->setText(QCoreApplication::translate("LogIn", "Cancel", nullptr));
        loginButton->setText(QCoreApplication::translate("LogIn", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogIn: public Ui_LogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
