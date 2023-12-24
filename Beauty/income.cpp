#include <iostream>
#include "incomehead.h"
using namespace std;

Income::Income(string p_ClientName, string p_date, string p_service,
               string p_master, float p_amount)
{
    ClientName = p_ClientName;
    data = p_date;
    service = p_service;
    amount = p_amount;
    master = p_master;
}

float Income::getAmount()   //метод для возврата суммы дохода
{
    return amount;
}

void Income::getInfoIncome(string& p_ClientName, string& p_date, string& p_service,                             //метод для возврата
                           string& p_master, float& p_amount)
{
    ClientName = p_ClientName;
    data = p_date;
    service = p_service;
    amount = p_amount;
    master = p_master;
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


