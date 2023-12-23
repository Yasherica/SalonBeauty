#ifndef EXPENSE
#define EXPENSE

#include <string>
#include <list>


//класс Expense
//Класс расходов
class Expense
{
private:
string RDate; // сумма и дата уплаты расходов
string Category; // название расходов (газ, свет, ремонт и тд)
float Amount; // сколько платим

/* string category; */

public:
Expense(string rd, string ctg, float a) :
 RDate(rd), Category (ctg), Amount(a)
{
/* тут пусто! */
}
string GetRName();
string GetRCtg();
float GetAmount();


};
#endif // EXPENSE

