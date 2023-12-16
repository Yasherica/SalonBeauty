#ifndef EXPENSETABLE_H
#define EXPENSETABLE_H

#include "expensetable.h"

//////////////////// класс таблица расходов //////////////////

class ExpenseTable
{
private:
vector<Expense*> vectPtrsExpenses; //вектор указателей на расходы
vector<Expense*>::iterator iter;

public:
~ExpenseTable();
void InsertExpense(Expense*);
string GetRcatExpense();
string GetRDateExpense();
string GetAmount();
void DisplayExp();
float DisplaySumExpense();
};

#endif // EXPENSETABLE_H

