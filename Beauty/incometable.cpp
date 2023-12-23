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

void IncomeTable::insertInc(Income* ptrIncome)            // добавляем доходы в вектор
{
    vectPtrsIncome.push_back(ptrIncome);
}

void IncomeTable::display()                            // распечатываем все доходы
{
    system("cls");
    cout << setw(15) << "Date|" << setw(20) << "ClientName|"
         << setw(15) << "service|" << setw(20) << "master|" << setw(20) << "cost\n"
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
        float    p_amount;
        while (iter != vectPtrsIncome.end())
        {                                               // распечатываем сумму доходов

            (*iter)->getInfoIncome(p_ClientName, p_data, p_service,
                                    p_master, p_amount);
            p_data = (*iter)->getData();
            p_ClientName = (*iter)->getClientName();
            p_service = (*iter)->getService();
            p_master = (*iter)->getMaster();
            p_amount = (*iter)->getAmount();
            cout << setw(14) << p_data << "|" << setw(19) << p_ClientName << "|"
                 << setw(14) <<p_service << "|" << setw(19) << p_master << "|" << setw(19) << p_amount <<  endl;

            cout << "---------------------------------------------------------------------" << endl;

            *iter++;

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

