#include <iostream>

using namespace std;

int main()
{
    int i;
    int stolbik[5];
    int prototip[5];
    for(i=0;i<5;i++)
    {
        cout<<"Zvezdochek v "<<i+1<<"-om stolbike:";
        cin>>stolbik[i];
        prototip[i]=stolbik[i];
    }

    int Max=prototip[0];
    for (i=1; i<5; i++)
    {
        if (prototip[i]>Max)
            Max=prototip[i];
    }
    for (int q=0;q<Max;q++)
    {
    for (i=0;i<5;i++)
    {
        if (prototip[i]>0)
            cout<<"*";
        else
            cout<<" ";
   prototip[i]+=-1;
    }
    cout<<endl;
    }
    return 0;
}
