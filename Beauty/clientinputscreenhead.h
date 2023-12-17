#ifndef CLIENTINPUTSCREENHEAD
#define CLIENTINPUTSCREENHEAD

#include "clienttablehead.h"
#include "incometablehead.h"

using namespace std;

////////////////класс ClientInputScreen////////////////////
//класс ClientInputScreen. Это класс, отвечающий за отображение «экрана»,
//куда пользователь может ввести данные о новом клиенте:
class ClientInputScreen
{
private:
ClientTable* ptrClientTable;
string name;
string number;
string service;
string master;
string comment;
string data;
string DateService;
int Sum;
public:
ClientInputScreen(ClientTable* ptrCT) : ptrClientTable(ptrCT)
{
/* тут пусто */
}
void setClient(); // добавление данных о клиенте
};

#endif // CLIENTINPUTSCREENHEAD




