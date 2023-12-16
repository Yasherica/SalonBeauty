#ifndef EXPENSESCREENHEAD_H
#define EXPENSESCREENHEAD_H

#include "expensetablehead.h"

//////////////////// класс Экран ввода расходов //////////////////

class ExpenseScreen
{
private:
ExpenseTable* ptrExpenseTable; //таблица расходов
string ExpenseCategory; //категория
string ExpenseDate; //дата
string ExpenseName; //название
float ExpenseAmount; // сумма
public:
ExpenseScreen(ExpenseTable*);
void SetExpense();
};

#endif // EXPENSESCREENHEAD_H

