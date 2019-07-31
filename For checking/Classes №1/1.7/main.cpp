#include <iostream>

using namespace std;

int main()
{
cout<<"Enter the size of the Christmas tree>>";
int sizze;
cin>>sizze;
int k=sizze-1;
    for (int i=0;i<sizze;i++)
    {
        for (int j=k;j>i;j--)
        {
            cout<<" ";
        }
        for (double q=-0.5;q<i;)
        {
            cout<<"Y";
            q=q+0.5;
        }
        cout<<endl;
    }
    for (int i=1;i<sizze;i++)
    {
        cout<<" ";
    }
    cout<<"*";

    return 0;
}
