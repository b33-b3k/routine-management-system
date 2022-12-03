QT       += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aboutpage.cpp \
    admin.cpp \
    calender.cpp \
    dashboard_1.cpp \
    helppage.cpp \
    main.cpp \
    mainwindow.cpp \
    passback.cpp \
    profile.cpp \
    registration.cpp \
    to_do.cpp

HEADERS += \
    aboutpage.h \
    admin.h \
    calender.h \
    dashboard_1.h \
    helppage.h \
    mainwindow.h \
    passback.h \
    profile.h \
    registration.h \
    to_do.h

FORMS += \
    aboutpage.ui \
    admin.ui \
    calender.ui \
    dashboard_1.ui \
    helppage.ui \
    mainwindow.ui \
    passback.ui \
    profile.ui \
    registration.ui \
    to_do.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
