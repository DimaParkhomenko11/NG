#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL,"ukr");
system("chcp 1251");
system("cls");

    int q,w,i,r=0;
    cout<<"Enter the number 1: ";
    cin>>q;
    cout<<"Enter the number 2: ";
    cin>>w;
    cout<<"1=soum(+)\n"
        <<"2=difference(-)\n"
        <<"3=multiplication(*)\n"
        <<"4=division(/)\n"
        <<"Select an action>>";
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
        cout<<"Result = "<<r;
    }
    else
    cout<<"Invalid value entered\n";
    return 0;
}
