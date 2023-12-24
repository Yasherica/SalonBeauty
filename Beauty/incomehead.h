#ifndef INCOME_H
#define INCOME_H

#include <list>
#include <string>

using namespace std;

//Класс доходов
class Income
{
private:
    string ClientName; // имя клиента
    string number; // номер телефона клиента
    string service;// услуга
    string master;// мастер
    string data;// дата записи
    float CostService; //дата оказания услуги
    string comment;// доп.комментарий
public:
    Income(string n, string Num, string Serv, string Mas, string DT, float DS, string comm); // конструктор
    void getInfoIncome(string n, string Num, string Serv, string Mas, string DT, float DS, string comm);//метод для возврата
    string getClientName();
    string getService();
    string getData();
    string getMaster();
    float getAmount();
};
#endif // INCOME_H
