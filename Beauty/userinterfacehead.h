#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "clientinputscreenhead.h"
#include "expensescreenhead.h"
#include "annualreporthead.h"

class UserInterface
{
private:
    ClientTable* ptrClientTable;
    ClientInputScreen* ptrClientInputScreen;
    IncomeTable* ptrIncomeTable;
    ExpenseTable* ptrExpenseTable;
    ExpenseScreen* ptrExpenseScreen;
    AnnualReport* ptrAnnualReport;
    char ch;
public:
    UserInterface();
    ~UserInterface();
    void interact();
};

#endif // USERINTERFACE_H
