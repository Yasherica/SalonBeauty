#ifndef CLIENTINPUTSCREENHEAD_H
#define CLIENTINPUTSCREENHEAD_H

#include "clienttablehead.h"
#include "incometablehead.h"

//класс ClientInputScreen. Это класс, отвечающий за отображение «экрана».
class ClientInputScreen
{
private:
    ClientTable* ptrClientTable;
    string name; // имя клиента
    string number; // номер телефона клиента
    string service;// услуга
    string master;// мастер
    string date;// дата записи
    string DateService; //дата оказания услуги
    int sum;// цена
    string comment;// доп.комментарий
public:
    ClientInputScreen(ClientTable* ptrCT) : ptrClientTable(ptrCT)
    {
    /* тут пусто */
    }
    void setClient(); // добавление данных о клиенте
};

#endif // CLIENTINPUTSCREENHEAD_H

