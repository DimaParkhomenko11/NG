#include <iostream>

using namespace std;

int main()
{
 int school[10];
 int mySchool;
 int i=0;
    for (int i=0;i<10;i++)
    {
        cout<<"Vvedi nomer kakoi-to shkolu:";
        cin>>school[i];
    }
    cout<<"A teper vvedi svoyu shkolu:";
    cin>>mySchool;

        for (i=0;i<10;i++)
        {
            if (school[i]==mySchool)
            {
                cout<<"Ya znayu etu shkolu!";
                i+=10;
            }
        }
    if (i<=10)
        cout<<"Ya ne znayu etu shkolu!";

    return 0;
}
