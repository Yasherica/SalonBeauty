TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    incometablehead.h \
    expensehead.h \
    incomehead.h \
    paymentinputscreenhead.h

