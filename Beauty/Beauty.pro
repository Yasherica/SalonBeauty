TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    client.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    annualreporthead.h \
    clienthead.h \
    clientinputscreenhead.h \
    clienttablehead.h \
    expensehead.h \
    expensescreenhead.h \
    expensetablehead.h \
    incometablehead.h \
    paymentinputscreenhead.h \
    userinterfacehead.h

    clienthead.h \
    clienttablehead.h \
    clientinputscreenhead.h \
    userinterfacehead.h \
    incometablehead.h \
    incomehead.h \
    expensescreenhead.h \
    expensetablehead.h \
    expensehead.h \
    annualreporthead.h


