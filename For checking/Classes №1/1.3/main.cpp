#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL,"ukr");
system("chcp 1251");
system("cls");

    int q,w,i,r=0;
    cout<<"Введите число 1: ";
    cin>>q;
    cout<<"Введите число 2: ";
    cin>>w;
    cout<<"1=сума\n"
        <<"2=разница\n"
        <<"3=умножение\n"
        <<"4=деление\n"
        <<"Выберите действие>>";
    cin>>i;
    if ((i>0)&&(i<5))
    {
        if (i==1)
            r=q+w;
        if (i==2)
            r=q-w;
        if (i==3)
            r=q*w;
        if (i==4)
            r=q/w;
        cout<<"Результат = "<<r;
    }
    else
    cout<<"Введено некорректное значение\n";
    return 0;
}
