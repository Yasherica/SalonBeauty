#include <iostream>
#include <cstdlib>
#include "expensehead.h"

using namespace std;


Expense::Expense(string rd, string ctg, float a)                       //конструктор
{
    RDate = rd;
    Category = ctg;
    amount = a;
}

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
    return amount;
}

