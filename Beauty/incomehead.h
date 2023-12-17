#ifndef INCOME_H
#define INCOME_H

#include <list>
#include <string>

//Класс доходов
class Income
{
private:
string ClientName;
string service;
double amount;
string data;
string master;
public:
Income(string p_ClientName, string p_data, string p_service,
       double p_amount, string p_master); // конструктор
void getInfoIncome(string& p_ClientName, string& p_data, string& p_service,
       double& p_amount, string& p_master); //метод для возврата
};

#endif // INCOME_H
