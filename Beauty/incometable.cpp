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
    cout << setw(15) << "Date|" << setw(15) << "ClientName|"
         << setw(15) << "Service|" << setw(15) << "Master|" << setw(16) << "Cost|\n"
    << "---------------------------------------------------------------------------" << endl;
    if (vectPtrsIncome.size() == 0)                     // в контейнере нет доходов
        cout << "***There is no income***\n" << endl;
    else
    {
        iter = vectPtrsIncome.begin();
        string n, Serv, Mas,DT;
        float DS;
        while (iter != vectPtrsIncome.end())
        {                                               // распечатываем сумму доходов

            DT = (*iter)->getData();
            n = (*iter)->getClientName();
            Serv = (*iter)->getService();
            Mas = (*iter)->getMaster();
            DS = (*iter)->getAmount();
            cout << setw(14) << DT << "|" << setw(14) << n << "|"
                 << setw(14) <<Serv << "|" << setw(14) << Mas << "|" << setw(14) << DS << "|" <<  endl;

            cout << "---------------------------------------------------------------------------" << endl;

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
        cout << '\t' << ((*iter)->getService()) << '\t' << ((*iter)->getMaster()) << '\t' << ((*iter)->getAmount()) << endl;
        totalIncomes += (*iter)->getAmount();          // подсчитываем все доходы
        iter++;
    }
    return totalIncomes;
}

