#include <iostream>
#include "annualreporthead.h"

using namespace std;

AnnualReport::AnnualReport(IncomeTable* ptrIT, ExpenseTable* ptrET) : ptrIT(ptrIT), ptrET(ptrET)
{

}
void AnnualReport::display()
{
    system("cls");
    float incomes, expenses;
    cout << "Annual report\n--------------\n" << endl;
    cout << "Income\n" << endl;
    incomes = ptrIT->displaySummary();
    cout << incomes << endl;
    cout << "Expenses\n" << endl;
    expenses = ptrET->displaySummary();
    cout << "Total expenses:\t\t";
    cout << expenses << endl;
    // вычисляем прибыльность
    cout << "\nBalance:\t\t\t" << (incomes - expenses) << endl;
}
