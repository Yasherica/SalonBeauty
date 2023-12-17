#ifndef CLIENTINPUTSCREENHEAD_H
#define CLIENTINPUTSCREENHEAD_H

#include "clienttablehead.h"
#include "incometablehead.h"

//класс ClientInputScreen. Это класс, отвечающий за отображение «экрана».
class ClientInputScreen
{
private:
    ClientTable* ptrClientTable;
    string Name;
    string Number;
    string Service;
    string Master;
    string Comment;
    int Data;
    int Sum;
public:
    ClientInputScreen(ClientTable* ptrCT) : ptrClientTable(ptrCT)
    {
    /* тут пусто */
    }
    void setClient(); // добавление данных о клиенте
};

#endif // CLIENTINPUTSCREENHEAD_H

