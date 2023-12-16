#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "userinterface.h"

//////////////////// Экран интерфейса пользователя //////////////////

class UserInterface
{
private:
ClientTable* ptrClientTable;
ClientInputScreen* ptrClientInpuyScreen;
IncomeTable* ptrIncomeTable;
PaymantIncomeScreen* ptrPaymantIncomeScreen;
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

