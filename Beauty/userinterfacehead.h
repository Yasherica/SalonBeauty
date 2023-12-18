#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "clienthead.h"
#include "clienttablehead.h"
#include "clientinputscreenhead.h"
#include "expensescreenhead.h"
#include "annualreporthead.h"
#include "incomehead.h"
#include "incometablehead.h"
#include "expensehead.h"
#include "expensetablehead.h"

class UserInterface
{
private:
    ClientTable* ptrClientTable;
    ClientInputScreen* ptrClientInputScreen;
    IncomeTable* ptrIncomeTable;
    ExpenseTable* ptrExpenseTable;
    ExpenseScreen* ptrExpenseScreen;
    AnnualReport* ptrAnnualReport;
public:
    UserInterface();
    ~UserInterface();
    void interact();
};

#endif // USERINTERFACE_H
