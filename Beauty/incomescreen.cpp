#include <iostream>
#include "incomescreenhead.h"
#include <string>

using namespace std;

IncomeScreen::IncomeScreen(IncomeTable* ptrIn):ptrIncomeTable(ptrIn)    // конструктор
{

}

void IncomeScreen::setIncome()                                                 // добавить данные о доходе
{
    system("cls");

    string p_ClientName;
    string p_service;
    float p_amount;
    string p_date;
    string p_master;

    cin.sync();
    cout << "Enter date (11/11/1111): " << endl;
    getline(cin, p_date);
    cout << "Enter client's name'): " << endl;
    getline(cin, p_ClientName);
    cout << "Enter service: " << endl;
    getline(cin, p_service);
    cout << "Enter master: " << endl;
    getline(cin, p_master);
    cout << "Enter cost: " << endl;
    cin >> p_amount;

    Income* ptrIncome = new Income(p_ClientName, p_date, p_service, p_master, p_amount);
    ptrIncomeTable->insertInc(ptrIncome);

}

