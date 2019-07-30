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
    cout<<"*";
    for (int q=0;q<i;q++)
    {
        cout<<"*";

    }
    for (int j=0;j<i;j++)
    {
        cout<<"*";
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
