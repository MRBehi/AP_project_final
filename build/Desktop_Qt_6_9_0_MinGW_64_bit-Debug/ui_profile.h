/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

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

class Ui_Profile
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
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QPushButton *EditButtom;

    void setupUi(QDialog *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName("Profile");
        Profile->resize(1206, 599);
        Profile->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-image: url(:/images/images/any_menu.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-attachment: fixed;\n"
"}"));
        verticalLayoutWidget = new QWidget(Profile);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(300, 60, 601, 450));
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

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        cancelButton = new QPushButton(verticalLayoutWidget);
        cancelButton->setObjectName("cancelButton");
        sizePolicy1.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy1);
        cancelButton->setMinimumSize(QSize(100, 30));
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ce93d0;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #bb7abc;\n"
"}"));

        horizontalLayout->addWidget(cancelButton);

        EditButtom = new QPushButton(verticalLayoutWidget);
        EditButtom->setObjectName("EditButtom");
        sizePolicy1.setHeightForWidth(EditButtom->sizePolicy().hasHeightForWidth());
        EditButtom->setSizePolicy(sizePolicy1);
        EditButtom->setMinimumSize(QSize(100, 35));
        EditButtom->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #88bfd9;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #6aaac1;\n"
"}"));

        horizontalLayout->addWidget(EditButtom);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QDialog *Profile)
    {
        Profile->setWindowTitle(QCoreApplication::translate("Profile", "Dialog", nullptr));
        titleLabel->setText(QCoreApplication::translate("Profile", "Profile", nullptr));
        nameLabel->setText(QCoreApplication::translate("Profile", "Name:", nullptr));
        lastnameLabel->setText(QCoreApplication::translate("Profile", "Last name:", nullptr));
        phonenoLabel->setText(QCoreApplication::translate("Profile", "Phone No:", nullptr));
        emailLabel->setText(QCoreApplication::translate("Profile", "Email:", nullptr));
        cancelButton->setText(QCoreApplication::translate("Profile", "Cancel", nullptr));
        EditButtom->setText(QCoreApplication::translate("Profile", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
