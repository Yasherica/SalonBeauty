#ifndef CLIENTTABLEHEAD
#define CLIENTTABLEHEAD

#include "clienthead.h"

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
string GetNumberClient(string); // возвращает номер телефона клиента
void DisplayClient(); // вывод списка клиента
};


#endif // CLIENTTABLEHEAD

