#include <iostream>
#include <iomanip>
#include "expensetablehead.h"


using namespace std;

ExpenseTable::~ExpenseTable()                         //деструктор
{
    while (!vectPtrsExpense.empty())                    // удалить объекты
    {                                                   // удалить указатели на вектор
        iter = vectPtrsExpense.begin();
        delete *iter;
        vectPtrsExpense.erase(iter);
    }
}

void ExpenseTable::InsertExpense(Expense* ptrExpense)          //добавляем расходы в вектор
{
    vectPtrsExpense.push_back(ptrExpense);
}



void ExpenseTable::DisplayExp()                           //распечатываем все расходы
{
    system("cls");
    cout << setw(15) << "Date|" << setw(20) << "Reciever|"
         << setw(20) << "Amount|" << setw(20) << "Category\n"
   << "--------------------------------------------------------------------------" << endl;
   if (vectPtrsExpense.size() == 0)                   // В контейнере нет расходов
      cout << "***There is no expenses***\n" << endl;
   else
   {
      iter = vectPtrsExpense.begin();
      string rd,                                  //дата уплаты расходов
             ctg;                             //указывается с какой целью произведена транзакция (оплата ком. услуг, выплата кредита и др.)
      float a;                                 //величина транзакции
      while (iter != vectPtrsExpense.end())
     {                                               // распечатываем все расходы
         (*iter)->getInfoExpense(rd, ctg, a);
            rd = (*iter)->GetRDate();
            ctg = (*iter)->GetRCtg();
            a = (*iter)->GetAmount();
            cout << setw(14) << rd << "|" << setw(19) << ctg << "|"
                 << setw(19) << a << "|" << endl;

            cout << "--------------------------------------------------------------------------" << endl;

        }
     }
        cout << endl;
}

float ExpenseTable::DisplaySumExpense()                   //используется при составлении годового отчета
{
    float totalExpenses = 0;                            // Сумма по всем категориям расходов

    if (vectPtrsExpense.size() == 0)
    {
        cout << "\tAll categories\t0\n";
        return 0;
    }
    iter = vectPtrsExpense.begin();
    while (iter != vectPtrsExpense.end())
    {                                                   //выводим на экран категории расходов
        cout << '\t' << ((*iter)->GetRCtg()) << '\t' << ((*iter)->GetAmount()) << endl;
        totalExpenses += (*iter)->GetAmount();          //подсчитываем все расходы
        iter++;
    }
    return totalExpenses;
}
