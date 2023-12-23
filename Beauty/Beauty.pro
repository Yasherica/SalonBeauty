TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    annualreport.cpp \
    client.cpp \
    clientinputscreen.cpp \
    clienttable.cpp \
    expense.cpp \
    expensescreen.cpp \
    expensetable.cpp \
    income.cpp \
    incometable.cpp \
    userinterface.cpp \
    incomescreen.cpp

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
    incomehead.h \
    incometablehead.h \
    userinterfacehead.h \
    incomescreenhead.h

