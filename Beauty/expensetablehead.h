#ifndef EXPENSETABLE_H
#define EXPENSETABLE_H

#include <string>
#include <vector>
#include "expensehead.h"

//////////////////// класс таблица расходов //////////////////

class ExpenseTable
{
private:
vector<Expense*> vectPtrsExpense; //вектор указателей на расходы
vector<Expense*>::iterator iter;

public:
~ExpenseTable();
void InsertExpense(Expense*);
float DisplaySumExpense();
void DisplayExp();
};

#endif // EXPENSETABLE_H

