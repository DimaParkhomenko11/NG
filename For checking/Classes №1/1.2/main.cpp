#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL,"ukr");
system("chcp 1251");
system("cls");

    int q;
    cout << "Enter your salary>>";
    cin>>q;
    if (q<1000)
        cout << "Work still";
    if (q>999)
        {
        if (q>999999)
             {
             cout << "You are a millionaire";
             }
        if (q<1000000)
            {
            cout << "You are rich";
            }
        }
       cout << ", but you are well done";

    return 0;
}
