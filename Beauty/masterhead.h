#ifndef MASTERHEAD
#define MASTERHEAD

#include "masterhead.h"

//////////////////// класс Master (клиенты) //////////////////
//Он хранит имя мастера и его телефонный номер.
class Master
{
private:
string namemas; // имя мастера
int numb; // номер телефона мастера
string post; //
public:
Master(string n, int aNo);
~Master();
int GetNumb(); //возвращает номер телефона мастера
string GetNamemas(); //возвращает имя мастера
string GetPost(); //возвращает должность мастера
};


#endif // MASTERHEAD

