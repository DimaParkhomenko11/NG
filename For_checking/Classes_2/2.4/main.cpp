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

    int Max=stolbik[0];
    for (i=1; i<5; i++)
    {
        if (stolbik[i]>Max)
            Max=stolbik[i];
    }
    for (int q=0;q<Max;q++)
    {
        for (i=0;i<5;i++)
        {
            if (stolbik[i]>q)
                cout<<"*";
            else
                cout<<" ";
        }
    cout<<endl;
    }
    return 0;
}
