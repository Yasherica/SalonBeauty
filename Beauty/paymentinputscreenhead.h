#ifndef PAYMENTINPUTSCREENHEAD
#define PAYMENTINPUTSCREENHEAD

#include "incometablehead.h"
class PaymentInputScreen
{
private:
IncomeTable* ptrIncomeTable; // список жильцов
string IncomeClientName; // имя жильца, который платит ренту
string IncomeDate; // рента
string IncomeService; // за месяц
string IncomeCostService; // за месяц
public:
PaymentInputScreen(IncomeTable* ptrIT) : ptrIncomeTable(ptrIT)
{
/*тут пусто*/
}
void SetIncome(); // добавить арендную плату одного жильца за месяц
};
#endif // PAYMENTINPUTSCREENHEAD

