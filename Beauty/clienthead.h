#ifndef CLIENTHEAD
#define CLIENTHEAD
#include <list>
#include <string>

using namespace std;
// класс Client (клиенты
//Он хранит имя клиента и информацию о нем.
class Client
{
private:
    string ClientName; // имя клиента
    string number; // номер телефона клиента
    string service;// услуга
    string master;// мастер
    string data;// дата записи
    string CostService; //дата оказания услуги
    string comment;// доп.комментарий
public:
    Client(string n, string Num, string Serv, string Mas, string DT, string DS, string comm);
    ~Client();
    string getClientName(); //возвращает имя клиента
    string getNumber(); //возвращает номер телефона клиента
    string getService();
    string getMaster();
    string getData();
    string getCostService();
    string getComment();
};

#endif // CLIENTHEAD
