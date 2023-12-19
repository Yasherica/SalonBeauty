#ifndef INCOME_H
#define INCOME_H

#include <list>
#include <string>

using namespace std;

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

Income(string p_ClientName, string p_data, string p_service, double p_amount,
        string p_master); // конструктор
void getInfoIncome(string& p_ClientName, string& p_data, string& p_service,                             //метод для возврата
                    double& p_amount, string& p_master);
double getAmount();

};

#endif // INCOME_H
