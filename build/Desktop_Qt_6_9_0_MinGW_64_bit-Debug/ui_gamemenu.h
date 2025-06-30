/********************************************************************************
** Form generated from reading UI file 'gamemenu.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEMENU_H
#define UI_GAMEMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameMenu
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *menuTitleLabel;
    QPushButton *startButton;
    QPushButton *gameHistoryButton;
    QPushButton *profileButton;
    QPushButton *exitButton;

    void setupUi(QDialog *GameMenu)
    {
        if (GameMenu->objectName().isEmpty())
            GameMenu->setObjectName("GameMenu");
        GameMenu->resize(1223, 589);
        GameMenu->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-image: url(:/images/images/Game_menu.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-attachment: fixed;\n"
"}"));
        verticalLayoutWidget = new QWidget(GameMenu);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(280, 100, 641, 411));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        menuTitleLabel = new QLabel(verticalLayoutWidget);
        menuTitleLabel->setObjectName("menuTitleLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(menuTitleLabel->sizePolicy().hasHeightForWidth());
        menuTitleLabel->setSizePolicy(sizePolicy);
        menuTitleLabel->setStyleSheet(QString::fromUtf8("QLabel#menuTitleLabel {\n"
"    font-size: 28px;\n"
"    font-weight: bold;\n"
"    color: #2a5d7d; \n"
"    padding: 15px;\n"
"    qproperty-alignment: AlignCenter;\n"
"}"));

        verticalLayout->addWidget(menuTitleLabel);

        startButton = new QPushButton(verticalLayoutWidget);
        startButton->setObjectName("startButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy1);
        startButton->setMinimumSize(QSize(0, 64));
        startButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 #88bfd9, stop:1 #ce93d0\n"
"    );\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding: 12px;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    min-height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 #76acc5, stop:1 #bb83c0\n"
"    );\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #6b8ea9;\n"
"}"));

        verticalLayout->addWidget(startButton);

        gameHistoryButton = new QPushButton(verticalLayoutWidget);
        gameHistoryButton->setObjectName("gameHistoryButton");
        sizePolicy1.setHeightForWidth(gameHistoryButton->sizePolicy().hasHeightForWidth());
        gameHistoryButton->setSizePolicy(sizePolicy1);
        gameHistoryButton->setMinimumSize(QSize(0, 64));
        gameHistoryButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 #88bfd9, stop:1 #ce93d0\n"
"    );\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding: 12px;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    min-height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 #76acc5, stop:1 #bb83c0\n"
"    );\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #6b8ea9;\n"
"}"));

        verticalLayout->addWidget(gameHistoryButton);

        profileButton = new QPushButton(verticalLayoutWidget);
        profileButton->setObjectName("profileButton");
        sizePolicy1.setHeightForWidth(profileButton->sizePolicy().hasHeightForWidth());
        profileButton->setSizePolicy(sizePolicy1);
        profileButton->setMinimumSize(QSize(0, 64));
        profileButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 #88bfd9, stop:1 #ce93d0\n"
"    );\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding: 12px;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    min-height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 #76acc5, stop:1 #bb83c0\n"
"    );\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #6b8ea9;\n"
"}"));

        verticalLayout->addWidget(profileButton);

        exitButton = new QPushButton(verticalLayoutWidget);
        exitButton->setObjectName("exitButton");
        sizePolicy1.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy1);
        exitButton->setMinimumSize(QSize(0, 64));
        exitButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 #88bfd9, stop:1 #ce93d0\n"
"    );\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding: 12px;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    min-height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 #76acc5, stop:1 #bb83c0\n"
"    );\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #6b8ea9;\n"
"}"));

        verticalLayout->addWidget(exitButton);


        retranslateUi(GameMenu);

        QMetaObject::connectSlotsByName(GameMenu);
    } // setupUi

    void retranslateUi(QDialog *GameMenu)
    {
        GameMenu->setWindowTitle(QCoreApplication::translate("GameMenu", "Dialog", nullptr));
        menuTitleLabel->setText(QCoreApplication::translate("GameMenu", "Game Menu", nullptr));
        startButton->setText(QCoreApplication::translate("GameMenu", "Start Game", nullptr));
        gameHistoryButton->setText(QCoreApplication::translate("GameMenu", "Game History", nullptr));
        profileButton->setText(QCoreApplication::translate("GameMenu", "Profile", nullptr));
        exitButton->setText(QCoreApplication::translate("GameMenu", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameMenu: public Ui_GameMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEMENU_H
