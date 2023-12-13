//Файл landlord.cpp содержит все определения методов
#include <iostream>
#include "globalmethod.h"
void getaLine(string& inStr) // получение строки текста
{
char temp[21];
cin.get(temp, 20, '\n');
cin.ignore(20, '\n'); //число пропускаемых символов и символ разделения
inStr = temp;
}
//---------------------------------------------------------
char getaChar() // получение символа
{
char ch = cin.get();
cin.ignore(80, '\n'); //число пропускаемых символов и символ разделения
return ch;
}
//---------------------------------------------------------
