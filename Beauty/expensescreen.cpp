#include <iostream>
#include "expensescreenhead.h"
#include <string>

using namespace std;

void ExpenseInputScreen::setExpense()
{
int month, day;
string category, payee;
float amount;
cout << "Введите месяц (1-12): ";
cin >> month;
cin.ignore(80, '\n');
cout << "Введите день (1-31): ";
cin >> day;
cin.ignore(80, '\n');
cout << "Введите категорию расходов (Ремонт, Налоги): ";
getaLine(category);
cout << "Введите получателя (ПростоквашиноЭлектроСбыт): ";
getaLine(payee);
cout << "Введите сумму (39.95): ";
cin >> amount;
cin.ignore(80, '\n');
// создаем новый расход
Expense* ptrExpense = new Expense(month, day, category, payee, amount);
// вставляем расход в список всех расходов
 ptrExpenseRecord->insertExp(ptrExpense);
}


ExpenseScreen::ExpenseScreen(Expense* ptrEt):ptrExpense(ptrEt)//конструктор
{
/*пусто*/
}

void ExpenseScreen::setExpense()                                               //добавить данные о расходе
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
    ptrExpense->InsertExpense(ptrExpense);                                        // занести в вектор
}
