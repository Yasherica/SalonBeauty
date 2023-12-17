#ifndef EXPENSEHEAD_H
#define EXPENSEHEAD_H

#include <list>
#include <string>

using namespace std;

//Класс расходов
class Expense
{
private:
    string RDate; // сумма и дата уплаты расходов
    string Category; // название расходов (газ, свет, ремонт и тд)
    float amount; // сколько платим
    /* string category; */

public:
    Expense(string rd, string  ctg, float a);
   /* RDate(rd), Category(ctg), amount(a)
    {

    } */
    string GetRDate();
    string GetRCtg();
    float GetAmount();


};
#endif // EXPENSEHEAD_H

