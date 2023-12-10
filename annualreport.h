#ifndef ANNUALREPORT_H
#define ANNUALREPORT_H

#include "annualreport.h"

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

#endif // ANNUALREPORT_H

