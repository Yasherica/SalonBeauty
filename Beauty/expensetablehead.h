#ifndef EXPENSETABLEHEAD_H
#define EXPENSETABLEHEAD_H


#include <vector>
#include <string>
#include "expensehead.h"



//класс таблица расходов
class ExpenseTable
{
private:
    vector<Expense*> vectPtrsExpense; //вектор указателей на расходы
    vector<Expense*>::iterator iter;

public:
    ~ExpenseTable();
    void InsertExpense(Expense* ptrExpense);
   string GetRCtgExpense();
    string GetRDateExpense();
    string GetAmount();
    float DisplaySumExpense();
    void DisplayExp();

};


#endif // EXPENSETABLEHEAD_H
