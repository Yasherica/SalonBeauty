#ifndef ANNUALREPORTHEAD_H
#define ANNUALREPORTHEAD_H

#include "incometablehead.h"
#include "expensetablehead.h"

using namespace std;
// Класс годового отчета
class AnnualReport
{
private:
    IncomeTable* ptrIT; // записи доходов
    ExpenseTable* ptrET; // записи расходов
    float Expense;
    float Incomes;// суммы доходов и расходов
public:
    AnnualReport(IncomeTable*, ExpenseTable*);
    void display(); // отображение годового отчета
};

#endif // ANNUALREPORTHEAD_H

