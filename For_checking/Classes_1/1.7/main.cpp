#include <iostream>

using namespace std;

int main()
{
cout<<"Enter the size of the Christmas tree>>";
int sizze;
int heightPos=1;
int widthPos=0;
cin>>sizze;
    for (heightPos=1;heightPos<=sizze;heightPos++)
    {
        for (widthPos=0;widthPos<sizze-heightPos;widthPos++)
        {
            cout<<" ";
        }
        for (widthPos=0;widthPos<heightPos*2-1;widthPos++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (heightPos=1;heightPos<sizze;heightPos++)
    {
        cout<<" ";
    }
    cout<<"*";

    return 0;
}
