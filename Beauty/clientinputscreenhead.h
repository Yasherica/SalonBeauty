#ifndef CLIENTINPUTSCREENHEAD
#define CLIENTINPUTSCREENHEAD

#include "clienttablehead.h"
#include "incometablehead.h"

////////////////класс ClientInputScreen////////////////////
//класс ClientInputScreen. Это класс, отвечающий за отображение «экрана»,
//куда пользователь может ввести данные о новом клиенте:
class ClientInputScreen
{
private:
ClientTable* ptrClientTable;
string CName;
string cNumber;
string cService;
string cMaster;
string cComment;
int cData;
int cSum;
public:
ClientInputScreen(ClientTable* ptrCT) : ptrClientTable(ptrCT)
{
/* тут пусто */
}
void setClient(); // добавление данных о клиенте
};

#endif // CLIENTINPUTSCREENHEAD

