#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL,"ukr");
system("chcp 1251");
system("cls");

    int q,w,i,r=0;
    cout<<"������� ����� 1: ";
    cin>>q;
    cout<<"������� ����� 2: ";
    cin>>w;
    cout<<"1=����\n"
        <<"2=�������\n"
        <<"3=���������\n"
        <<"4=�������\n"
        <<"�������� ��������>>";
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
        cout<<"��������� = "<<r;
    }
    else
    cout<<"������� ������������ ��������\n";
    return 0;
}
