#include <iostream>
#include "incometablehead.h"
#include <iomanip>

using namespace std;

IncomeTable::~IncomeTable()                           // деструктор
{
    while (!vectPtrsIncome.empty())                     // удалить объекты
    {                                                   // удалить указатели на вектор
        iter = vectPtrsIncome.begin();
        delete *iter;
        vectPtrsIncome.erase(iter);
    }
}

void IncomeTable::insertInc(Income* ptrInc)            // добавляем доходы в вектор
{
    vectPtrsIncome.push_back(ptrInc);
}

void IncomeTable::display()                            // распечатываем все доходы
{
    system("cls");
    cout << setw(15) << "Date|" << setw(20) << "Order number|"
         << setw(15) << "Sum|" << setw(20) << "Payment method\n"
    << "---------------------------------------------------------------------" << endl;
    if (vectPtrsIncome.size() == 0)                     // в контейнере нет доходов
        cout << "***There is no income***\n" << endl;
    else
    {
        iter = vectPtrsIncome.begin();
        string   p_data,
                 p_ClientName,
                 p_service,
                 p_master;
        double   p_amount;
        while (iter != vectPtrsIncome.end())
        {                                               // распечатываем сумму доходов
            (*iter)->getInfoIncome(p_ClientName, p_data, p_service,
                                   p_amount, p_master);
            cout << setw(14) << p_data << "|" << setw(19) << p_ClientName << "|"
                 << setw(14) <<p_service << "|" << setw(19) << p_master << "|" << setw(19) << p_amount <<  endl;

            cout << "---------------------------------------------------------------------" << endl;

        }
     }
        cout << endl;
}

float IncomeTable::displaySummary()                   // используется при составлении годового отчета
{
    double totalIncomes = 0;                            // Сумма доходов

    if (vectPtrsIncome.size() == 0)
    {
        return 0;
    }
    iter = vectPtrsIncome.begin();
    while (iter != vectPtrsIncome.end())
    {
        totalIncomes += (*iter)->getAmount();          // подсчитываем все доходы
        iter++;
    }
    return totalIncomes;
}

