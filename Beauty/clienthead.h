#ifndef CLIENTHEAD
#define CLIENTHEAD

#include "libs.h"

//////////////////// класс Client (клиенты) //////////////////
//Он хранит имя клиента и его телефонный номер.
class Client
{
private:
string name; // имя клиента
int number; // номер телефона клиента
string service;//
string master;//
int data;//
int sum;//
string comment;//
public:
Client(string n, int aNo);
~Client();
string getName(); //возвращает имя клиента
int getNumber(); //возвращает номер телефона клиента
string getService();
string getMaster();
int getData();
int getSum();
string getComment();
};

#endif // CLIENTHEAD
