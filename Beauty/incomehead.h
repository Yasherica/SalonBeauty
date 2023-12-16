#ifndef INCOME
#define INCOME
//Класс доходов
class Income
{
private:
string ClientName;
string Service;
double CostService;
int Date;
public:
Income(int); // конструктор с одним параметром
string GetClientName();
string GetService();
double GetCostService();
int GetDate;
};
#endif // INCOME

