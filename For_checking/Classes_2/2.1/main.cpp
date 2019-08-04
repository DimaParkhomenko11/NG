#include <iostream>

using namespace std;

int main()
{
 int school[10];
 int mySchool;
    for (int i=0;i<10;i++)
    {
        cout<<"Vvedi nomer kakoi-to shkolu:";
        cin>>school[i];
    }
    cout<<"A teper vvedi svoyu shkolu:";
    cin>>mySchool;
    for (int i=0;i<10;i++)
    {
        if (mySchool==school[i])
        {
            cout<<"Ya znayu etu shkolu!";
            break;
        }
        else
        {
            cout<<"Ya ne znayu etu shkolu!";
            break;
        }
    }
    return 0;
}
