#include <iostream>
#include "clienthead.h"
#include <cstdlib>
#include <stdint.h>

using namespace std;

////////////////методы класса Client///////////////////////
//в конструкторе задаём имя клиента и остальную информацию
Client:: Client(string n, int Num, string Serv, string Mas, string DT, string DS, int SM, string comm)   //конструктор
{
    name = n;
    number = Num;
    service = Serv;
    master = Mas;
    date = DT;
    DateService = DS;
    sum = SM;
    comment = comm;
}


//---------------------------------------------------------
Client::~Client() // деструктор
{
/* тут тоже пусто */
}
//--------------------------------------------------------
string Client::getName() //геттер возвращает
{
return name;
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
string Client::getDate() //
{
return data;
}
//--------------------------------------------------------
string Client::getDateService() //
{
return data;
}
//--------------------------------------------------------
int Client::getSum() //
{
return sum;
}
//--------------------------------------------------------
string Client::getComment() //
{
return comment;
}
//--------------------------------------------------------


