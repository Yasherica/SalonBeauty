#ifndef INCOMERECORD
#define INCOMERECORD

#include <string>
#include <vector>
#include <income.h>

using namespace std;

class IncomeRecord                      //Класс записей о доходах
{
private:
    vector<Income*>vectPtrsIncome;      //вектор указателей на доходы
    vector<Income*>::iterator iter;     //итератор для вектора указателей
public:
    ~IncomeRecord();                    //деструктор
    void insertInc(Income* ptrInc);     //добавляем доходы в вектор
    void display();                     //распечатываем сумму доходов
    float displaySummary();             //используется при составлении годового отчета
};

#endif // INCOMERECORD
