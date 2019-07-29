#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL,"ukr");
system("chcp 1251");
system("cls");

    int q,w;
    cout<<"Enter the number 1: ";
    cin>>q;
    cout<<"Enter the number 2: ";
    cin>>w;
    cout<<"Result = "<<q+w;
    return 0;
}
