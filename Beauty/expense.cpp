#include <iostream>
#include "expensehead.h"

using namespace std;

string Expense::GetRDate()                                                  //метод для возврата даты расхода
{
    return RDate;
}

string Expense::GetRCtg()                                                  //метод для возврата категории расхода
{
    return Category;
}

float Expense::GetAmount()                                                      //метод для возврата суммы расхода
{
    return Amount;
}

void Expense::getInfoExpense(string& rd, string& ctg, float& a)                       //значения полей
{
     rd = RDate;
     ctg = Category;
     a = Amount;
}
