#ifndef INCOME
#define INCOME

#include "libs.h"

//Класс доходов
class Income
{
private:
string ClientName;
string iService;
double CostService;
int iDate;
public:
Income(int); // конструктор с одним параметром
string GetCN;
string GetService();
double GetCostService();
int GetIDate();
};

#endif // INCOME
