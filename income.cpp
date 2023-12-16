#include "incomehead.h"

using namespace std;

Income::Income(string p_ClientName, string p_data, string p_service, double p_amount,
               string p_master)
{
    ClientName = p_ClientName;
    data = p_date;
    service = p_service;
    amount = p_amount;
    master = p_master;
}

double Income::getAmount()                                                                   //метод для возврата суммы дохода
{
    return amount;
}

void Income::getInfoIncome(string& p_ClientName, string& p_data, string& p_service,                             //метод для возврата
                           double& p_amount, string& p_master)
{
    ClientName = p_ClientName;
    data = p_date;
    service = p_service;
    amount = p_amount;
    master = p_master;
}


