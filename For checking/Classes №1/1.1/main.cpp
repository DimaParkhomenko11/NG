#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL,"ukr");
system("chcp 1251");
system("cls");

    int q,w;
    cout<<"������� ����� 1: ";
    cin>>q;
    cout<<"������� ����� 2: ";
    cin>>w;
    cout<<"��������� = "<<q+w;
    return 0;
}
