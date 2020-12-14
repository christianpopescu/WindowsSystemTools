TEMPLATE = app
TARGET = QtSandbox

QT = core gui

greaterThan(QT_MAJOR_VERSION, 5): QT += widgets

SOURCES +=  main.cpp
LIBS += -L"$$_PRO_FILE_PWD_/Externals" -lStaticLibrary2
