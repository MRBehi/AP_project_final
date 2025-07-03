#include "mainwindow.h"
#include <QApplication>
#include <QTcpSocket>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;
    window.show();

    return app.exec();
}

// #include <QApplication>
// #include <QTcpSocket>
// #include "MainGamePage.h"

// int main(int argc, char *argv[])
// {
//     QApplication app(argc, argv);

//     QString testPlayerName = "TestPlayer";
//     QTcpSocket *dummySocket = new QTcpSocket();  // not connected, just for UI testing

//     MainGamePage window(testPlayerName, dummySocket);
//     window.show();

//     return app.exec();
// }
