#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
setlocale(LC_ALL,"ukr");
system("chcp 1251");
system("cls");

    int q;
    cout << "������� ���� ��>>";
    cin>>q;
    if (q<1000)
        cout << "������� ���";
    if (q>999)
        {
        if (q>999999)
             {
             cout << "�� ��������";
             }
        if (q<1000000)
            {
            cout << "�� �������";
            }
        }
       cout << ", �� �� �������";

    return 0;
}
