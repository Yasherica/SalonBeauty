#ifndef CLIENTHEAD
#define CLIENTHEAD
#include <list>
#include <string>

using namespace std;
//////////////////// класс Client (клиенты) //////////////////
//Он хранит имя клиента и его телефонный номер.
class Client
{
private:
string name; // имя клиента
string number; // номер телефона клиента
string service;// услуга
string master;// мастер
string date;// дата записи
string DateService; //дата оказания услуги
int sum;// цена
string comment;// доп.комментарий
public:
Client(string n, string num, string Serv, string Mas, string DT, string DS, int SM, string comm);
~Client();

string getName(); //возвращает имя клиента
string getNumber(); //возвращает номер телефона клиента
string getService();
string getMaster();
string getDate();
string getDateService();
int getSum();
string getComment();
};

#endif // CLIENTHEAD


