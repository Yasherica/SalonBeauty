#ifndef INCOMETABLEHEAD
#define INCOMETABLEHEAD

//#include "incomehead.h"
#include <list>

//класс IncomeTable — список всех доходов
//Он содержит множество указателей на класс Client
class IncomeTable
{
private:
// установить указатели на клиентов
list <Income*> setPtrsIncome; // указатели на класс клиентов
list <Income*>::iterator iter; //итератор
public:
~IncomeTable(); // деструктор (удаление клиентов)
void InsertIncome(Income*); // добавить клиента в список
string GetServiceIncome(string);
string CostServiceIncome(string);
string GetDateIncome(string);
float GetSumIncomeDisplay();
void DisplayIncome(); // вывод списка клиента
};

#endif // INCOMETABLEHEAD
