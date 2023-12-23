#ifndef EXPENSESCREENHEAD_H
#define EXPENSESCREENHEAD_H

#include "expensetablehead.h"

//////////////////// класс Экран ввода расходов //////////////////

class ExpenseScreen
{
private:
ExpenseTable* ptrExpenseTable; //таблица расходов
string Category; //категория
string RDate; //дата
float Amount; // сумма
public:
ExpenseScreen(ExpenseTable*);
void SetExpense();
};

#endif // EXPENSESCREENHEAD_H

