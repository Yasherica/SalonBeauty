#include <iostream>
#include "expensescreenhead.h"
#include <string>

using namespace std;

ExpenseScreen::ExpenseScreen(ExpenseTable* ptrEt):ptrExpenseTable(ptrEt)//конструктор
{
/*пусто*/
}

void ExpenseScreen::SetExpense()                                               //добавить данные о расходе
{
    system("cls");

    string rd, ctg;
    float a;
    cin.sync();
    cout << "Enter date (11/11/1111): " << endl;
    getline(cin, rd);
    cout << "Enter category (Materials, Taxes, Rent or Salary): " << endl;
    getline(cin, ctg);
    cout << "Enter Amount (5000): " << endl;
    cin >> a;

    Expense* ptrExpense = new Expense(rd, ctg, a);                       // создать расход
    ptrExpenseTable->InsertExpense(ptrExpense);                                        // занести в вектор
}
