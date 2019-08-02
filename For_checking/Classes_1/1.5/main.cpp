#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL,"ukr");
system("chcp 1251");
system("cls");
    int q,i=0;
    cout << "Insert the number>>";
    cin>>q;
    while (q>=i)
    {
        cout<<i;
        i=i+1;
    }
    return 0;
}
