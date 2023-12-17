#include "incometablehead.h"
#include <iostream>
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
                 p_ClientName;
                 p_service;
                 p_master;
        double   p_amount;
        while (iter != vectPtrsIncome.end())
        {                                               // распечатываем сумму доходов
            (*iter)->getInfoIncome(p_date, p_ClientName, p_service, p_master,
                                   p_amount);
            cout << setw(14) << p_data << "|" << setw(19) << p_ClientName << "|"
                 << setw(14) <<p_service << "|" << setw(19) << p_master << "|" << setw(19) << p_amount <<  endl;

            cout << "---------------------------------------------------------------------" << endl;
            cout << "'1' - Delete   '2' - Edit   'any other number' - Next" << endl;
            char choise;
            cin >> choise;
            if (choise == '1')
            {
                delete *iter;
                iter = vectPtrsIncome.erase(iter);
            }
            else if (choise == '2')
            {
                (*iter)->edit();
                ++iter;
            }
            else
            {
                ++iter;
            }
            cout << "-----------------------------------------------------" << endl;
        }
     }
        cout << endl;
}

double IncomeTable::displaySummary()                   // используется при составлении годового отчета
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

