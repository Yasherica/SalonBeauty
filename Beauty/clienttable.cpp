#include <iostream>
#include <string>
#include <list>
#include "clienttablehead.h"

using namespace std;

ClientTable::~ClientTable()                           // деструктор
{
    while (!setPtrsClients.empty())
    {                                               // удаление всех кл из контейнера
        iter = setPtrsClients.begin();
        delete *iter;
        setPtrsClients.erase(iter);
    }
}

void ClientTable::insertClient(Client* ptrC)
{
    setPtrsClients.push_back(ptrC);                 // вставка нового клиента в список
}

void ClientTable::display() // вывод списка клиентов
{
cout << "\nApt#\tИмя клиента\n-------------------\n";
if (setPtrsClients.empty()) // если список клиентов пуст
cout << "***Нет клиентов***\n" << endl; // выводим запись, что он пуст)
else
{
iter = setPtrsClients.begin();
while (iter != setPtrsClients.end()) // распечатываем всех клиентов
{
cout << (*iter)->getClientName() << " || "
     << (*iter)->getNumber() << " || "
     << (*iter)->getService() << " || "
     << (*iter)->getMaster() << " || "
     << (*iter)->getData() << " || "
     << (*iter)->getCostService() << " || "
     << (*iter)->getComment() << endl;
*iter++;
}
}
}

int ClientTable::GetInfoClient(string name) // получить инфу о клиенте по имени жильца
{
    int Sum;
    string Num, Serv, Mas, DT, DS, comm;
    iter = setPtrsClients.begin();
    while (iter != setPtrsClients.end())
{
// поиск клиента в списке (достаем у каждого жильца номер апартаментов)
    Num = (*iter)->getNumber();
    Serv = (*iter)->getService();
    Mas = (*iter)->getMaster();
    DT = (*iter)->getData();
    DS = (*iter)->getCostService();
    comm = (*iter)->getComment();   //если не работает, то создать 7 итераторов для каждого метода отдельно
    if (name == ((*iter)->getClientName())) // сравниваем по имени
{
// если получившаяся пара совпадает - значит,
//мы нашли запись об этом жильце в списке, в этом случае
cout << name << "||" << Num << "||" << Serv << "||" << Mas << "||" << DT << "||" <<DS << "||" <<Sum <<  "||" <<comm;
}
iter++;
}
return -1; // если нет - возвращаем -1
}




