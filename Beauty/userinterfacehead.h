#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "clienttablehead.h"
#include "clientinputscreenhead.h"
#include "expensescreenhead.h"
#include "annualreporthead.h"
#include "incometablehead.h"
#include "expensetablehead.h"
#include "incomescreenhead.h"

class UserInterface
{
private:
    ClientTable* ptrClientTable;
    ClientInputScreen* ptrClientInputScreen;
    IncomeTable* ptrIncomeTable;
    IncomeScreen* ptrIncomeScreen;
    ExpenseTable* ptrExpenseTable;
    ExpenseScreen* ptrExpenseScreen;
    AnnualReport* ptrAnnualReport;
public:
    UserInterface();
    ~UserInterface();
    void interact();
};

#endif // USERINTERFACE_H
