#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL,"ukr");
system("chcp 1251");
system("cls");

    int q,w;
    cout<<"¬ведите число 1: ";
    cin>>q;
    cout<<"¬ведите число 2: ";
    cin>>w;
    cout<<"–езультат = "<<q+w;
    return 0;
}
