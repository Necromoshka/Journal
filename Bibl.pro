######################################################################
# Automatically generated by qmake (2.01a) ?? 23. ??? 01:36:11 2015
######################################################################

TEMPLATE += app
TARGET +=
DEPENDPATH += . ui
INCLUDEPATH += .
QT += sql core gui
# Input
HEADERS += addchange.h \
           addmain.h \
           adduser.h \
           dsettings.h \
           login.h \
           mainwindow.h \
           sql.h \
    ui_add_change.h \
    ui_add_main.h \
    ui_add_user.h \
    ui_dsettings.h \
    ui_login.h \
    ui_main.h
FORMS += ui/add_change.ui \
         ui/add_main.ui \
         ui/add_user.ui \
         ui/dsettings.ui \
         ui/login.ui \
         ui/main.ui
SOURCES += addchange.cpp \
           addmain.cpp \
           adduser.cpp \
           dsettings.cpp \
           login.cpp \
           main.cpp \
           mainwindow.cpp \
           sql.cpp
RESOURCES += res.qrc
TRANSLATIONS += Ru_ru.ts

DISTFILES +=
win32::RC_FILE = ico.rc
win64::RC_FILE = ico.rc