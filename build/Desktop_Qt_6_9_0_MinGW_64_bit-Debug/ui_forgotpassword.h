/********************************************************************************
** Form generated from reading UI file 'forgotpassword.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPASSWORD_H
#define UI_FORGOTPASSWORD_H

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

class Ui_ForgotPassword
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QHBoxLayout *phonenoLayout;
    QLabel *phonenoLabel;
    QLineEdit *phonenoLine;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QPushButton *submitButton;

    void setupUi(QDialog *ForgotPassword)
    {
        if (ForgotPassword->objectName().isEmpty())
            ForgotPassword->setObjectName("ForgotPassword");
        ForgotPassword->resize(1289, 560);
        ForgotPassword->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-image: url(:/images/images/any_menu.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-attachment: fixed;\n"
"}"));
        verticalLayoutWidget = new QWidget(ForgotPassword);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(340, 130, 551, 281));
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

        phonenoLayout = new QHBoxLayout();
        phonenoLayout->setObjectName("phonenoLayout");
        phonenoLabel = new QLabel(verticalLayoutWidget);
        phonenoLabel->setObjectName("phonenoLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
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


        retranslateUi(ForgotPassword);

        QMetaObject::connectSlotsByName(ForgotPassword);
    } // setupUi

    void retranslateUi(QDialog *ForgotPassword)
    {
        ForgotPassword->setWindowTitle(QCoreApplication::translate("ForgotPassword", "Dialog", nullptr));
        titleLabel->setText(QCoreApplication::translate("ForgotPassword", "Log In by Phone No", nullptr));
        phonenoLabel->setText(QCoreApplication::translate("ForgotPassword", "Phone No:", nullptr));
        cancelButton->setText(QCoreApplication::translate("ForgotPassword", "Cancel", nullptr));
        submitButton->setText(QCoreApplication::translate("ForgotPassword", "Log In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ForgotPassword: public Ui_ForgotPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORD_H
