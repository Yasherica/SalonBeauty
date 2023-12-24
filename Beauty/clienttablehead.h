#ifndef CLIENTTABLEHEAD_H
#define CLIENTTABLEHEAD_H

#include "clienthead.h"
#include <list>


//класс ClientTable
class ClientTable                        // список всех клиентов
{
private:
    list <Client*> setPtrsClients;      // список указателей на класс клиентов
    list <Client*>::iterator iter;      // итератор
public:
    ~ClientTable();                      // деструктор - удаление клиентов
    void insertClient(Client* ptrC);    // добавление клиента в список
    int GetInfoClient(string);
    void display();                     // вывод списка клиентов
};

#endif// CLIENTTABLEHEAD_H


