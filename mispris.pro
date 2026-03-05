QT       += core gui widgets sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT += sql

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    database.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    database.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Для Windows
win32 {
    # Флаги для MinGW
    QMAKE_CXXFLAGS += -std=c++17
    QMAKE_LFLAGS += -Wl,-subsystem,windows
}

# Отключаем ненужные предупреждения
QMAKE_CXXFLAGS += -Wno-unused-parameter


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    TABLE.sql
