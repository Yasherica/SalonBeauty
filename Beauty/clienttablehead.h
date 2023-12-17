#ifndef CLIENTTABLEHEAD
#define CLIENTTABLEHEAD

#include "clienthead.h"
#include <list>

using namespace std;

///////////////////класс ClientTable////////////////////////
//класс ClientTable — список всех клиентов.
//Он содержит множество указателей на класс Client
class ClientTable
{
private:
// установить указатели на клиентов
list <Client*> setPtrsClientTable; // указатели на класс клиентов
list <Client*>::iterator iter; //итератор
public:
~ClientTable(); // деструктор (удаление клиентов)
void InsertClient(Client*); // добавить клиента в список
//string GetNumberClient(string); // возвращает номер телефона клиента
void DisplayClient(); // вывод списка клиента
};


#endif // CLIENTTABLEHEAD



class ClientList                        // список всех клиентов
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


