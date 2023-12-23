#ifndef INCOMESCREENHEAD
#define INCOMESCREENHEAD
#include "incometablehead.h"

class IncomeScreen                         //Класс для ввода доходов
{
private:
    IncomeTable* ptrIncomeTable;              // запись о доходах
    string ClientName;
    string service;
    float amount;
    string data;
    string master;
public:
    IncomeScreen(IncomeTable* ptrIn);     // конструктор
    void setIncome();                           //добавить данные о доходе
};

#endif // INCOMESCREENHEAD

