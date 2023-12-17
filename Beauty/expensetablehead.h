#ifndef EXPENSETABLEHEAD_H
#define EXPENSETABLEHEAD_H

#include "expensehead.h"
#include <vector>

//класс таблица расходов
class ExpenseTable
{
private:
    vector<Expense*> vectPtrsExpense; //вектор указателей на расходы
    vector<Expense*>::iterator iter;

public:
    ~ExpenseTable();
    void InsertExpense(Expense*);
    string GetRcatExpense();
    string GetRDateExpense();
    string GetAmount();
    float DisplaySumExpense();
    void DisplayExp();
};

#endif // EXPENSETABLEHEAD_H

