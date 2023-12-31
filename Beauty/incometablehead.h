#ifndef INCOMERECORD_H
#define INCOMERECORD_H

#include <string>
#include <vector>
#include <incomehead.h>

using namespace std;

class IncomeTable                      //Класс записей о доходах
{
private:
    vector<Income*>vectPtrsIncome;      //вектор указателей на доходы
    vector<Income*>::iterator iter;     //итератор для вектора указателей
public:
    ~IncomeTable();                    //деструктор
    void insertInc(Income* ptrIncome);     //добавляем доходы в вектор
    void display();                     //распечатываем сумму доходов
    float displaySummary();             //используется при составлении годового отчета
    string getClientName();
    string getService();
    string getData();
    string getMaster();
    float getAmount();

};

#endif // INCOMERECORD_H
