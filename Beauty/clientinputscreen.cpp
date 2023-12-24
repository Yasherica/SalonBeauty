#include <iostream>
#include <string>
#include <list>
#include "clientinputscreenhead.h"
#include "incometable.cpp"
#include "incometablehead.h"
using namespace std;

ClientInputScreen::ClientInputScreen(ClientTable* ptrCT,IncomeTable* ptrIn) : ptrClientTable(ptrCT),ptrIncomeTable(ptrIn)     // конструктор
{
//И тут похоже пусто
}

void ClientInputScreen::setClient()                                             // добавить данные о клиенте
{
    string n, Num,Serv, Mas,DT, comm ;
    float DS;
    system("cls");
    cin.sync();
    cout << "Enter client's name (Sava Nazarov): " << endl;
    getline(cin, n);
    cout << "Enter the client's phone number (+79110529980): " << endl;
    getline(cin, Num);
    cout << "Enter the service (Nails, massage...): " << endl;
    getline(cin, Serv);
    cout << "Enter master's name (Sava, Lisa, Sanya, Sonya): " << endl;
    getline(cin, Mas);
    cout << "Enter date (11/11/1111): " << endl;
    getline(cin, DT);
    cout << "Enter cost (5000): " << endl;
    cin>> DS;
    cout << "Enter comment (Xoxoxo): " << endl;
    getline(cin, comm);


    Client* ptrClient = new Client(n, Num,Serv, Mas,DT, DS, comm);           // создать клиента
    Income* ptrIncome = new Income(n, Num,Serv, Mas,DT, DS, comm);
    ptrClientTable->insertClient(ptrClient);
    ptrIncomeTable->insertInc(ptrIncome);// занести в список клиентов
}


