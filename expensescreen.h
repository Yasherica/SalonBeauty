#ifndef EXPENSESCREEN_H
#define EXPENSESCREEN_H

#include "expensescreen.h"

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

#endif // EXPENSESCREEN_H

