/********************************************************************************
** Form generated from reading UI file 'maingame.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINGAME_H
#define UI_MAINGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_MainGame
{
public:

    void setupUi(QDialog *MainGame)
    {
        if (MainGame->objectName().isEmpty())
            MainGame->setObjectName("MainGame");
        MainGame->resize(400, 300);

        retranslateUi(MainGame);

        QMetaObject::connectSlotsByName(MainGame);
    } // setupUi

    void retranslateUi(QDialog *MainGame)
    {
        MainGame->setWindowTitle(QCoreApplication::translate("MainGame", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainGame: public Ui_MainGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINGAME_H
