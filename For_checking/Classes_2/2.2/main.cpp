#include <iostream>

using namespace std;

int main()
{
 int card[100];
 int N,i,k=0;
 int sum;
    for (i=0;i<100;i++)
    {
        card[i]=0;
    }
    for (;;)
    {
        cout<<"Vvedi nomer kartochki: ";
        cin>>N;
        if ((N>0)&&(N<101))
        {
            cout<<"Skolko polozhit: ";
            cin>>sum;
            card[N-1]+=sum;
            for (int i=0;i<100;i++)
            cout<<card[i]<<" ";
        cout<<endl;
        }
        else
        {
            cout<<"Error: you entered incorrect values!!!\n";
        }
    }
 return 0;
}
