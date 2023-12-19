//////////////методы класса ExpenseInputScreen/////////////
#include <iostream>
#include "expensescreenhead.h"

// конструктор
ExpenseInputScreen::ExpenseInputScreen(ExpenseTable* per) : ptrExpenseTable(per)
{
/*пусто*/
}
//------------------------------------------------------
void ExpenseInputScreen::setExpense()
{
string ExpenseCategory, ExpenseDate;
float ExpenseAmount;

cout << "Введите дату (дд/мм/гг): ";
cin >> ExpenseDate;
cin.ignore(80, '\n');


cout << "Введите категорию расходов (Ремонт, Налоги и т.п.): ";
getaLine(ExpenseCategory);

cout << "Введите сумму (39.95): ";
cin >> ExpenseAmount;
cin.ignore(80, '\n');

// создаем новый расход
Expense* ptrExpense = new Expense(ExpenseDate, ExpenseCategory, ExpenseAmount);
// вставляем расход в список всех расходов
 ptrExpenseTable->insertExpense(ptrExpense);
}
//---------------------------------------------------------
