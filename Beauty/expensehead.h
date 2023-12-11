#ifndef EXPENSE
#define EXPENSE

//класс Expense
//Класс расходов
class Expense
{
private:
int RDate; // сумма и дата уплаты расходов
string RName; // название расходов (газ, свет, ремонт и тд)
float amount; // сколько платим
public:
Expense(int rd, string rn, float a) :
 RDate(rd), RName(rn), amount(a)
{
/* тут пусто! */
string GetRName();
int GetRName();
float GetAmount();
};
#endif // EXPENSE

