#include <iostream>

using namespace std;
void zapolnenie(int card[],int i)
{
    for (i=0;i<10;i++)
    {
        card[i]=0;
    }

}
void suma(int sum,int N,int card[])
{
    card[N-1]+=sum;
}
void vivod(int card[])
{
     for (int i=0;i<10;i++)
            {
                cout<<card[i]<<" ";
            }
            cout<<endl;
}

int main()
{
    int card[10];
    int N,i,k=0;
    int sum;
    zapolnenie(card,i);
    for (;;)
    {
        cout<<"Vvedi nomer kartochki: ";
        cin>>N;
        if (N>0 && N<11)
        {
            cout<<"Skolko polozhit: ";
            cin>>sum;
            suma(sum,N,card);
            vivod(card);
        }
        else
        {
            cout<<"Error: you entered incorrect values!!!\n";
        }
    }

    for(k=0;k<10;k++)
    cout<<card[k];


    return 0;
}
