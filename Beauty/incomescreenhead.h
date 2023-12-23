#ifndef INCOMESCREENHEAD
#define INCOMESCREENHEAD
#include "incometablehead.h"

class IncomeScreen                         //Класс для ввода доходов
{
private:
    IncomeTable* ptrIncomeTable;              // запись о доходах
    string ClientName; // имя клиента
    string number; // номер телефона клиента
    string service;// услуга
    string master;// мастер
    string data;// дата записи
    string CostService; //дата оказания услуги
    string comment;// доп.комментарий
public:
    IncomeScreen(IncomeTable* ptrIn);     // конструктор
    void setIncome();                           //добавить данные о доходе
};

#endif // INCOMESCREENHEAD

