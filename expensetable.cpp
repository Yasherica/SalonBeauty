#include "expensetablehead.h"
#include <iostream>
#include <iomanip>

using namespace std;

ExpenseRecord::~ExpenseRecord()                         //деструктор
{
    while (!vectPtrsExpense.empty())                    // удалить объекты
    {                                                   // удалить указатели на вектор
        iter = vectPtrsExpense.begin();
        delete *iter;
        vectPtrsExpense.erase(iter);
    }
}

void ExpenseRecord::InsertExp(Expense* ptrExp)          //добавляем расходы в вектор
{
    vectPtrsExpense.push_back(ptrExp);
}

void ExpenseRecord::DisplayExp() // распечатываем все расходы
{
cout << "\nDate\tCategory\tAmount\n"
<< "----------------------------------------\n" << endl;
if (vectPtrsExpenses.size() == 0) // В контейнере нет расходов
cout << "No expenses\n" << endl;
else
{
iter = vectPtrsExpenses.begin();
while (iter != vectPtrsExpenses.end())
{ // распечатываем все расходы
 cout << (*iter)->RDate <<  '\t' << (*iter)->Category << '\t' << '\t';
 cout << (*iter)->amount << '\t' << endl;
 iter++;
}
cout << endl;
}
}

float ExpenseRecord::displaySummary()  //для годового отчета
{
float totalExpenses = 0; // Сумма по всем категориям расходов
if (vectPtrsExpenses.size() == 0)
{
cout << "\tAll categories\t0\n";
return 0;
}
iter = vectPtrsExpenses.begin();
while (iter != vectPtrsExpenses.end())
{
//выводим на экран категории расходов
cout << '\t' << ((*iter)->Category) << '\t' << ((*iter)->Amount) << endl;
totalExpenses += (*iter)->Amount; //подсчитываем все расходы
iter++;
}
return totalExpenses;
}
