#include <iostream>
#include "userinterfacehead.h"
#include <windows.h> // необходимо для работы функции Sleep()

using namespace std;

UserInterface::UserInterface()
{
    ptrClientTable = new ClientTable;
    ptrIncomeTable = new IncomeTable;
    ptrExpenseTable = new ExpenseTable;
   // ptrAnnualReport = new AnnualReport;
}

UserInterface::~UserInterface()
{
    delete ptrClientTable;
    delete ptrIncomeTable;
    delete ptrExpenseTable;
   // delete ptrAnnualReport;
}

void UserInterface::interact()
         {
         while (true)
            {
                char choise;
                cout << "Client - 'c', \n"
                     << "Output the income table - 'i', \n"
                     << "Expense - 'e', \n"
                     << "Annual Report - 'a', \n"
                     << "Exit the program - 'q': \n";
                cin >> choise;
                if (choise == 'c') // ввод данных
                {
                    system("cls");
                    cout << "Add a client - 'c', \n"
                         << "Output a table of clients - 'r', \n";

                    cin >> choise;
                    switch (choise)
                    {
                        case 'c':
                        ptrClientInputScreen =
                        new ClientInputScreen(ptrClientTable);
                        ptrClientInputScreen->setClient();
                        delete ptrClientInputScreen;
                        system("cls");
                        break;

                        case 'r':
                        ptrClientTable->display();
                        break;
                     }
                 }//Клиент

                     else if (choise == 'i') // ввод данных
                     {
                            system("cls");
                            ptrIncomeTable->display();
                            break;

                     }//Доход

                     else if (choise == 'e') // ввод данных
                     {
                            system("cls");
                            cout << "Add expense - 'a', \n";
                            cout << "Output the expense table - 'r', \n";

                             cin >> choise;
                             switch (choise)
                             {
                             case 'a':
                             ptrExpenseScreen =
                             new ExpenseScreen(ptrExpenseTable);
                             ptrExpenseScreen->SetExpense();
                             delete ptrExpenseScreen;
                             system("cls");
                             break;

                             case 'r':
                             ptrExpenseTable->DisplayExp();
                             break;
                             }
                     }//Расходы

                     else if (choise == 'a') // ввод данных
                     {
                             system("cls");
                                 ptrAnnualReport =
                                 new AnnualReport(ptrIncomeTable, ptrExpenseTable);
                                 ptrAnnualReport->display();
                                 delete ptrAnnualReport;
                             break;
                    }//Годовой отчет

                    else if (choise == 'q')
                    {
                            return;
                            break;
                    }//Выход

                    else
                    {
                        cout << "Unknown function\n";
                        Sleep(500);
                        system("cls");
                    }
            } // конец while
}
