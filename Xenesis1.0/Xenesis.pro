#-------------------------------------------------
#
# Project created by QtCreator 2019-03-26T14:05:54
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Xenesis
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
        mainwindow.cpp \
    dialog1.cpp \
    home.cpp \
    first.cpp \
    singup.cpp \
    cs.cpp \
    cs_c_language.cpp \
    ad_home.cpp \
    ad_student.cpp \
    ad_books.cpp \
    ad_deposit.cpp \
    ad_students_2.cpp \
    ad_addnewbooks.cpp \
    xte.cpp \
    xel.cpp \
    xme.cpp \
    xcv.cpp \
    xma.cpp \
    xpy.cpp \
    xch.cpp \
    xmba.cpp \
    xnv.cpp

HEADERS += \
        mainwindow.h \
    dialog1.h \
    home.h \
    first.h \
    singup.h \
    cs.h \
    cs_c_language.h \
    ad_home.h \
    ad_student.h \
    ad_books.h \
    ad_deposit.h \
    ad_students_2.h \
    ad_addnewbooks.h \
    xte.h \
    xel.h \
    xme.h \
    xcv.h \
    xma.h \
    xpy.h \
    xch.h \
    xmba.h \
    xnv.h

FORMS += \
        mainwindow.ui \
    dialog1.ui \
    home.ui \
    first.ui \
    singup.ui \
    cs.ui \
    cs_c_language.ui \
    ad_home.ui \
    ad_student.ui \
    ad_books.ui \
    ad_deposit.ui \
    ad_students_2.ui \
    ad_addnewbooks.ui \
    xte.ui \
    xel.ui \
    xme.ui \
    xcv.ui \
    xma.ui \
    xpy.ui \
    xch.ui \
    xmba.ui \
    xnv.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    src.qrc
