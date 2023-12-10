#ifndef CLIENTHEAD
#define CLIENTHEAD

#include "clienthead.h"

//////////////////// класс Client (клиенты) //////////////////
//Он хранит имя клиента и его телефонный номер.
class Client
{
private:
string name; // имя клиента
int number; // номер телефона клиента
public:
Client(string n, int aNo);
~Tenant();
int getNumberClient(); //возвращает номер телефона клиента
string getName(); //возвращает имя клиента
};

#endif // CLIENTHEAD
