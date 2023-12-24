#include <iostream>
#include "incomehead.h"
using namespace std;

Income::Income(string n, string Num, string Serv, string Mas, string DT, float DS, string comm)
{
    ClientName= n;
    number = Num;
    service = Serv;
    master = Mas;
    data = DT;
    CostService = DS;
    comment = comm;
}

void Income::getInfoIncome(string n, string Num, string Serv, string Mas, string DT, float DS, string comm)
{
    ClientName= n;
    number = Num;
    service = Serv;
    master = Mas;
    data = DT;
    CostService = DS;
    comment = comm;
}

float Income::getAmount()   //метод для возврата суммы дохода
{
    return CostService;
}

string Income::getClientName()
{
    return ClientName;
}

string Income::getData()
{
    return data;
}

string Income::getService()
{
    return service;
}
string Income::getMaster()
{
    return master;
}


