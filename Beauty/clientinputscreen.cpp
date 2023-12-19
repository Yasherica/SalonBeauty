#include <iostream>
#include <string>
#include <list>
#include "clientinputscreenhead.h"

using namespace std;

ClientInputScreen::ClientInputScreen(ClientTable* ptrCT) : ptrClientTable(ptrCT)    // конструктор
{
//И тут похоже пусто
}
void ClientInputScreen::setClient()                                             // добавить данные о клиенте
{
    string n, Num,
           Serv, Mas,
           DT, DS, comm ;

    system("cls");
    cin.sync();
    cout << "Enter client's name: " << endl;
    getline(cin, n);
    cout << "Enter the client's phone number : " << endl;
    getline(cin, Num);
    cout << "Enter the service: " << endl;
    getline(cin, Serv);
    cout << "Enter master's name: " << endl;
    getline(cin, Mas);
    cout << "Enter: " << endl;
    getline(cin, DT);
    cout << "Enter ): " << endl;
    getline(cin, DS);
    cout << "Enter : " << endl;
    getline(cin, comm);


    Client* ptrClient = new Client(n, Num,
                                   Serv, Mas,
                                   DT, DS, comm);           // создать клиента
    ptrClientTable->insertClient(ptrClient);                                     // занести в список клиентов
}

