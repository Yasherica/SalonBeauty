TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    client.cpp \
    clienttable.cpp \
    clientinputscreen.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    clienthead.h \
    clienttablehead.h \
    clientinputscreenhead.h \
    userinterfacehead.h \
    incometablehead.h \
    incomehead.h \
    expensescreenhead.h \
    expensetablehead.h \
    expensehead.h \
    annualreporthead.h \
    clientinputtable.h


