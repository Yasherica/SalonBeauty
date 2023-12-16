#ifndef INCOME
#define INCOME


//Класс доходов
class Income
{
private:
string ClientName;
string service;
double amount;
string data;
string master;
public:
Income(string p_ClientName, string p_data, string p_service, double p_amount,
        string p_master); // конструктор
void getInfoIncome(string& p_ClientName, string& p_data, string& p_service,                             //метод для возврата
                    double& p_amount, string& p_master);
};

#endif // INCOME
