#include <iostream>
#include "clienthead.h"

using namespace std;

//методы класса Client
//в конструкторе задаём имя клиента и остальную информацию
Client::Client(string n, string Num, string Serv, string Mas, string DT, string DS, string comm)   //конструктор
{
    ClientName= n;
    number = Num;
    service = Serv;
    master = Mas;
    data = DT;
    CostService = DS;
    comment = comm;
}


//---------------------------------------------------------
Client::~Client() // деструктор
{
/* тут тоже пусто */
}
//--------------------------------------------------------
string Client::getClientName() //геттер возвращает
{
return ClientName;
}
//---------------------------------------------------------
string Client::getNumber() //геттер возвращает
{
return number;
}
//--------------------------------------------------------
string Client::getService() //
{
return service;
}
//--------------------------------------------------------
string Client::getMaster() //
{
return master;
}
//--------------------------------------------------------
string Client::getData() //
{
return data;
}
//--------------------------------------------------------
string Client::getCostService() //
{
return CostService;
}


//--------------------------------------------------------
string Client::getComment() //
{
return comment;
}
//--------------------------------------------------------


