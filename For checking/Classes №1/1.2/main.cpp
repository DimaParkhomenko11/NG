#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL,"ukr");
system("chcp 1251");
system("cls");

    int q;
    cout << "Введите вашу ЗП>>";
    cin>>q;
    if (q<1000)
        cout << "Работай еще";
    if (q>999)
        {
        if (q>999999)
             {
             cout << "Ты милионер";
             }
        if (q<1000000)
            {
            cout << "Ты богатый";
            }
        }
       cout << ", но ты молодец";

    return 0;
}
