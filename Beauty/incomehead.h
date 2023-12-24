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
float amount;
string data;
string master;
public:

Income(string p_ClientName, string p_date, string p_service,
        string p_master, float p_amount); // конструктор
void getInfoIncome(string& p_ClientName, string& p_date, string& p_service,                             //метод для возврата
                     string& p_master, float& p_amount);
string getClientName();
string getService();
string getData();
string getMaster();
float getAmount();

};

#endif // INCOME_H
