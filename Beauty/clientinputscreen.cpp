#include <iostream>
#include <string>
#include <list>
#include <stdint.h>
#include "clientinputscreenhead.h"

using namespace std;

ClientInputScreen::ClientInputScreen(ClientList* ptrCL):ptrClientList(ptrCL)    // конструктор
{

}

void ClientInputScreen::setClient()                                             // добавить данные о клиенте
{
    string n, Num, Serv, Mas, DT, DS, comm;
    int SM;

    system("cls");
    cin.sync();
    cout << "Enter client's name (): " << endl;
    getline(cin, n);
    cout << "Enter phone number: " << endl;
    getline(cin, Num);
    cout << "Enter srevice: " << endl;
    getline(cin, Serv);
    cout << "Enter Master: " << endl;
    getline(cin, Mas);
    cout << "Enter date of order: " << endl;
    getline(cin, DT);
    cout << "Enter date of service: " << endl;
    getline(cin, DS);
    cout << "Enter full price" << endl;
    cin >> SM;
    cout << "Enter else comments: " << endl;
    getline(cin, comm);
\

    Client* ptrClient = new Client(n, Num, Serv,
                                   Mas, DT, DS, comm);           // создать клиента
    ptrClientList->insertClient(ptrClient);                                     // занести в список клиентов
}
