#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL,"ukr");
system("chcp 1251");
system("cls");
int q;
cout<<"Enter Cube Size>>";
cin>>q;
for (int i=0;q>i;i++){
    for(int j=0;q>j;j++)
        cout<<"*";
        cout<<endl;
    }
    return 0;
}
