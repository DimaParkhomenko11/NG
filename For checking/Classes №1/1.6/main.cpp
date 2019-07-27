#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL,"ukr");
system("chcp 1251");
system("cls");
int q;
cout<<"¬ведите размер куба>>";
cin>>q;
for (int i=0;q>i;i++){
        cout<<"\n* ";
    for(int j=1;q>j;j++)
        cout<<"* ";
    }
    return 0;
}
