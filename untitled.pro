QT       += core gui
QT += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Channels.cpp \
    ClientClass.cpp \
    ServerClass.cpp \
    card.cpp \
    deck.cpp \
    forgotpassword.cpp \
    gamehistory.cpp \
    gamemenu.cpp \
    login.cpp \
    main.cpp \
    maingame.cpp \
    maingamepage.cpp \
    mainwindow.cpp \
    profile.cpp \
    signup.cpp \
    userstorage.cpp \
    welcomepage.cpp

HEADERS += \
    Channels.h \
    ClientClass.h \
    ServerClass.h \
    card.h \
    deck.h \
    forgotpassword.h \
    gamehistory.h \
    gamemenu.h \
    login.h \
    maingame.h \
    maingamepage.h \
    mainwindow.h \
    profile.h \
    signup.h \
    userstorage.h \
    welcomepage.h

FORMS += \
    ClientClass.ui \
    ServerClass.ui \
    forgotpassword.ui \
    gamehistory.ui \
    gamemenu.ui \
    login.ui \
    maingame.ui \
    maingamepage.ui \
    mainwindow.ui \
    profile.ui \
    signup.ui \
    welcomepage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pictures.qrc
