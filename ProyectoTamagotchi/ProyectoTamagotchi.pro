#-------------------------------------------------
#
# Project created by QtCreator 2015-05-27T02:40:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProyectoTamagotchi
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    personaje.cpp \
    tamagotchi.cpp

HEADERS  += mainwindow.h \
    personaje.h \
    tamagotchi.h

FORMS    += mainwindow.ui \
    tamagotchi.ui
