#-------------------------------------------------
#
# Project created by QtCreator 2019-04-18T21:40:34
#
#-------------------------------------------------

QT       += core gui
QT += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CaveAdventure_1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
    player.cpp \
    world.cpp \
    caveadventure.cpp \
    room.cpp \
    endegui.cpp \
    creature.cpp \
    anfangsgui.cpp \
    spielfeldgui.cpp \
    inventarliste.cpp \
    inventar.cpp \
    haendlergui.cpp \
    widgetcave.cpp

HEADERS += \
    player.h \
    world.h \
    caveadventure.h \
    room.h \
    endegui.h \
    creature.h \
    anfangsgui.h \
    spielfeldgui.h \
    inventarliste.h \
    inventar.h \
    haendlergui.h \
    widgetcave.h

FORMS += \
    endegui.ui \
    anfangsgui.ui \
    spielfeldgui.ui \
    haendlergui.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ressourcen.qrc \
    sounds.qrc

DISTFILES +=


