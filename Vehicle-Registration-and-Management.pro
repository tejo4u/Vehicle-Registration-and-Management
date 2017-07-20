#-------------------------------------------------
#
# Project created by QtCreator 2017-07-13T16:15:50
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Vehicle-Registration-and-Management
TEMPLATE = app


SOURCES += main.cpp\
        login_page.cpp \
    user_registartion.cpp

HEADERS  += login_page.h \
    login_verification.h \
    database_connection.h \
    user_registartion.h \
    password_hasher.h

FORMS    += login_page.ui \
    user_registartion.ui


