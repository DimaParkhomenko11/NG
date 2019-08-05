#include <iostream>

using namespace std;

int main()
{
    int i;
    int stolbik[5];
    for(i=0;i<5;i++)
    {
        cout<<"Zvezdochek v "<<i+1<<"-om stolbike:";
        cin>>stolbik[i];
    }
    for (int q=0;q<8;q++)
    {
    for (int i=0;i<5;i++)
    {
        if (stolbik[i]>0)
            cout<<"*";
        else
            cout<<" ";
    stolbik[i]+=-1;
    }
    cout<<endl;
    }
    return 0;
}
