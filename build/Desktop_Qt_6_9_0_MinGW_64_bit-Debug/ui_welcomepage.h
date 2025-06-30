/********************************************************************************
** Form generated from reading UI file 'welcomepage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEPAGE_H
#define UI_WELCOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomePage
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *mainLayout;
    QLabel *titleLabel;
    QLabel *welcomeLabel;
    QPushButton *signupButton;
    QPushButton *loginButton;

    void setupUi(QDialog *WelcomePage)
    {
        if (WelcomePage->objectName().isEmpty())
            WelcomePage->setObjectName("WelcomePage");
        WelcomePage->resize(1266, 588);
        WelcomePage->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-image: url(:/images/images/Welcome_page.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-attachment: fixed;\n"
"}"));
        verticalLayoutWidget = new QWidget(WelcomePage);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 70, 661, 371));
        mainLayout = new QVBoxLayout(verticalLayoutWidget);
        mainLayout->setSpacing(4);
        mainLayout->setObjectName("mainLayout");
        mainLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        mainLayout->setContentsMargins(10, 10, 10, 10);
        titleLabel = new QLabel(verticalLayoutWidget);
        titleLabel->setObjectName("titleLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        titleLabel->setMinimumSize(QSize(0, 80));
        QFont font;
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel#titleLabel {\n"
"    font-size: 32px;\n"
"    font-weight: bold;\n"
"    color: #1f4e6d;\n"
"    padding: 10px;\n"
"    qproperty-alignment: AlignLeft;\n"
"}"));

        mainLayout->addWidget(titleLabel);

        welcomeLabel = new QLabel(verticalLayoutWidget);
        welcomeLabel->setObjectName("welcomeLabel");
        sizePolicy.setHeightForWidth(welcomeLabel->sizePolicy().hasHeightForWidth());
        welcomeLabel->setSizePolicy(sizePolicy);
        welcomeLabel->setMinimumSize(QSize(0, 150));
        welcomeLabel->setStyleSheet(QString::fromUtf8("QLabel#welcomeLabel {\n"
"    font-size: 14px;\n"
"    color: #555;\n"
"    padding: 10px;\n"
"    line-height: 1.5em;\n"
"}"));

        mainLayout->addWidget(welcomeLabel);

        signupButton = new QPushButton(verticalLayoutWidget);
        signupButton->setObjectName("signupButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(signupButton->sizePolicy().hasHeightForWidth());
        signupButton->setSizePolicy(sizePolicy1);
        signupButton->setStyleSheet(QString::fromUtf8("QPushButton#signupButton {\n"
"    background-color: #88bfd9;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    padding: 10px;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton#signupButton:hover {\n"
"    background-color: #6aaac1;\n"
"}"));

        mainLayout->addWidget(signupButton);

        loginButton = new QPushButton(verticalLayoutWidget);
        loginButton->setObjectName("loginButton");
        sizePolicy1.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy1);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton#loginButton {\n"
"    background-color: #ce93d0;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    padding: 10px;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton#loginButton:hover {\n"
"    background-color: #bb7abc;\n"
"}"));
        loginButton->setCheckable(false);
        loginButton->setChecked(false);

        mainLayout->addWidget(loginButton);


        retranslateUi(WelcomePage);

        QMetaObject::connectSlotsByName(WelcomePage);
    } // setupUi

    void retranslateUi(QDialog *WelcomePage)
    {
        WelcomePage->setWindowTitle(QCoreApplication::translate("WelcomePage", "Dialog", nullptr));
        titleLabel->setText(QCoreApplication::translate("WelcomePage", "Poffer Card\n"
"Game", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("WelcomePage", "<html><head/><body><p>Welcome to Poffer Card!</p><p>Dive into the world of strategic card battles \342\200\224 challenge your friends and enjoy every thrilling move.<br/>Play Poffer Card now and let the fun begin!</p></body></html>", nullptr));
        signupButton->setText(QCoreApplication::translate("WelcomePage", "Sign up", nullptr));
        loginButton->setText(QCoreApplication::translate("WelcomePage", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomePage: public Ui_WelcomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEPAGE_H
