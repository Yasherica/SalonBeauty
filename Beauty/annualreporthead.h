#ifndef ANNUALREPORTHEAD_H
#define ANNUALREPORTHEAD_H

#include "libs.h"
using namespace std;
//////////////////// Класс годового отчета //////////////////
class AnnualReport
{
private:
IncomeTable* ptrRR; // записи доходов
ExpenseTable* ptrER; // записи расходов
float Expense;
float Incomes;// суммы доходов и расходов
public:
AnnualReport(IncomeTable*, ExpenseTable*);
void display(); // отображение годового отчета
};

#endif // ANNUALREPORTHEAD_H

