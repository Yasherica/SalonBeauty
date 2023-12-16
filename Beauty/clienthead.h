#ifndef CLIENTHEAD
#define CLIENTHEAD

#include "clienthead.h"

#include "libs.h"


using namespace std;

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
Client(string n, int Num, string Serv, string Mas, int DT, int SM, string comm);
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
