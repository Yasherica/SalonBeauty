#ifndef SERVICEHEAD
#define SERVICEHEAD

#include "libs.h"

//////////////////// класс Service //////////////////
//Он хранит имя процедуры и ее стоимость.
class Service
{
private:
string names; // имя процедуры
int cost; // стоимость процедуры
public:
Service(string n, int aNo);
~Service();
int DisplayService(); //
string GetNames(); //возвращает название процедуры
string GetCost(); //возвращает стоимость процедуры
};

#endif // SERVICEHEAD

