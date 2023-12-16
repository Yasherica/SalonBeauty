TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \

    beautyhead.h \
    clienthead.h \
    clienttablehead.h \
    masterhead.h


