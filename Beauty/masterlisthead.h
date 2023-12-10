#ifndef MASTERLISTHEAD
#define MASTERLISTHEAD

#include "masterhead.h"

///////////////////класс MasterList////////////////////////
//класс MasterList — список всех мастеров.
//Он содержит множество указателей на класс Master
class MasterList
{
private:
// установить указатели на мастеров
list <Master*> setPtrsMasterList; // указатели на класс мастеров
list <Master*>::iterator iter; //итератор
public:
~MasterList(); // деструктор (удаление мастеров)
int GetNumbMaster(string); // возвращает номер телефона мастера
int GetPostMaster(string); // возвращает должность мастера
void DisplayMaster(); // вывод списка мастеров
};

#endif // MASTERLISTHEAD

