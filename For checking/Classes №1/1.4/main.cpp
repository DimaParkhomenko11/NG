#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL,"ukr");
system("chcp 1251");
system("cls");
    int q;
    cout << "Введите количестово *: ";
    cin>>q;
    for (int i=0;q>i;i++)
        cout<<"*";
    return 0;
}
