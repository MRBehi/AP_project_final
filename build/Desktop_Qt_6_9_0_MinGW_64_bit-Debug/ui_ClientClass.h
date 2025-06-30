/********************************************************************************
** Form generated from reading UI file 'ClientClass.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTCLASS_H
#define UI_CLIENTCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientClass
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *ClientClass)
    {
        if (ClientClass->objectName().isEmpty())
            ClientClass->setObjectName("ClientClass");
        ClientClass->resize(791, 572);
        widget = new QWidget(ClientClass);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(260, 200, 258, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName("textEdit");
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        retranslateUi(ClientClass);

        QMetaObject::connectSlotsByName(ClientClass);
    } // setupUi

    void retranslateUi(QDialog *ClientClass)
    {
        ClientClass->setWindowTitle(QCoreApplication::translate("ClientClass", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ClientClass", "send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientClass: public Ui_ClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTCLASS_H
