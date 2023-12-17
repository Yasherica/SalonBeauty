#ifndef CLIENTTABLEHEAD
#define CLIENTTABLEHEAD

#include "clienthead.h"
#include <list>

using namespace std;

///////////////////класс ClientTable////////////////////////

class ClientTable                       // список всех клиентов
{
private:
    list <Client*> setPtrsClients;      // список указателей на класс клиентов
    list <Client*>::iterator iter;      // итератор
public:
    ~ClientList();                      // деструктор - удаление клиентов
    void insertClient(Client* ptrC);    // добавление клиента в список
    void GetInfoClient(string);
    void display();                     // вывод списка клиентов
};

#endif // CLIENTLIST


