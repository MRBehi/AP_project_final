/********************************************************************************
** Form generated from reading UI file 'gamehistory.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEHISTORY_H
#define UI_GAMEHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameHistory
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *historyLabel;
    QPushButton *backButton;
    QTableWidget *historyTable;

    void setupUi(QDialog *GameHistory)
    {
        if (GameHistory->objectName().isEmpty())
            GameHistory->setObjectName("GameHistory");
        GameHistory->resize(1216, 609);
        GameHistory->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-image: url(:/images/images/any_menu.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-attachment: fixed;\n"
"}"));
        verticalLayoutWidget = new QWidget(GameHistory);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(220, 80, 771, 381));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        historyLabel = new QLabel(verticalLayoutWidget);
        historyLabel->setObjectName("historyLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(historyLabel->sizePolicy().hasHeightForWidth());
        historyLabel->setSizePolicy(sizePolicy);
        historyLabel->setStyleSheet(QString::fromUtf8("QLabel#historyLabel {\n"
"    font-size: 24px;\n"
"    font-weight: bold;\n"
"    color: #2a5d7d;\n"
"    padding: 12px;\n"
"    qproperty-alignment: AlignCenter;\n"
"}"));

        horizontalLayout->addWidget(historyLabel);

        backButton = new QPushButton(verticalLayoutWidget);
        backButton->setObjectName("backButton");
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);
        backButton->setStyleSheet(QString::fromUtf8("QPushButton#backButton {\n"
"    background-color: transparent;\n"
"    color: #2a5d7d;\n"
"    font-size: 14px;\n"
"    border: 2px solid #88bfd9;\n"
"    border-radius: 6px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton#backButton:hover {\n"
"    background-color: #e1f1f8;\n"
"    color: #1f4e6d;\n"
"}\n"
"\n"
"QPushButton#backButton:pressed {\n"
"    background-color: #cbdce7;\n"
"}"));

        horizontalLayout->addWidget(backButton);


        verticalLayout->addLayout(horizontalLayout);

        historyTable = new QTableWidget(verticalLayoutWidget);
        historyTable->setObjectName("historyTable");
        historyTable->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    background-color: #f0f5f9;\n"
"    border: 1px solid #b0c4de;\n"
"    font-size: 14px;\n"
"    gridline-color: #d0d9e6;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #88bfd9;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    padding: 4px;\n"
"    border: none;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #ce93d0;\n"
"    color: black;\n"
"}"));

        verticalLayout->addWidget(historyTable);


        retranslateUi(GameHistory);

        QMetaObject::connectSlotsByName(GameHistory);
    } // setupUi

    void retranslateUi(QDialog *GameHistory)
    {
        GameHistory->setWindowTitle(QCoreApplication::translate("GameHistory", "Dialog", nullptr));
        historyLabel->setText(QCoreApplication::translate("GameHistory", "Game History", nullptr));
        backButton->setText(QCoreApplication::translate("GameHistory", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameHistory: public Ui_GameHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEHISTORY_H
