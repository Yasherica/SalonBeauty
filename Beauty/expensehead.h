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
    float Amount; // сколько платим

public:
    Expense(string rd, string  ctg, float a):
    RDate(rd), Category(ctg), Amount(a)
    {

    }
    string GetRDate();
    string GetRCtg();
    float GetAmount();
    void getInfoExpense(string& rd, string& ctg,float& a);
};
#endif //EXPENSEHEAD_H
