#ifndef CLIENTINPUTSCREENHEAD
#define CLIENTINPUTSCREENHEAD

#include "clienttablehead.h"
#include "masterlisthead.h"
#include "servicelisthead.h"

////////////////класс ClientInputScreen////////////////////
//класс ClientInputScreen. Это класс, отвечающий за отображение «экрана»,
//куда пользователь может ввести данные о новом клиенте:
class ClientInputScreen
{
private:
ClientList* ptrClientList;
string CName;
string Number;
string Service;
string Master;
string Comment;
int Data;
int Sum;
int aptNo;

public:
ClientInputScreen(ClientList* ptrCL) : ptrClientList(ptrCL)
{
/* тут пусто */
}
void setClient(); // добавление данных о клиенте
};

#endif // CLIENTINPUTSCREENHEAD

