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


        if ((mySchool==school[0])||(mySchool==school[1])||(mySchool==school[2])||(mySchool==school[3])||(mySchool==school[4])||(mySchool==school[5])||(mySchool==school[6])||(mySchool==school[7])||(mySchool==school[8])||(mySchool==school[9]))
        {
            cout<<"Ya znayu etu shkolu!";
        }
        else
        {
            cout<<"Ya ne znayu etu shkolu!";

        }

    return 0;
}
