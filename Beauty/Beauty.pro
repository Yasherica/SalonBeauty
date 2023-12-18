TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    main.cpp\
    client.cpp \
    userinterface.cpp \
    expense.cpp \
    expensescreen.cpp \
    expensetable.cpp \
    income.cpp \
    incometable.cpp \
    annualreport.cpp \
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
    annualreporthead.h

