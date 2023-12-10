#ifndef SERVICELISTHEAD
#define SERVICELISTHEAD

#include "servicehead.h"

///////////////////класс ServiceList////////////////////////
//класс ServiceList — список всех процедур.
//Он содержит множество указателей на класс Service
class ServiceList
{
private:
// установить указатели на процедуры
list <Service*> setPtrsServiceList; // указатели на класс процедур
list <Service*>::iterator iter; //итератор
public:
~ServiceList(); // деструктор (удаление процедур)
int GetCostService(string); // возвращает стоимость процедур
void DisplayService(); // вывод списка процедур
};

#endif // SERVICELISTHEAD


