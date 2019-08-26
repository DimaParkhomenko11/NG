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

int cardnumber(int N)
{
    cout<<"Vvedi nomer kartochki: ";
    cin>>N;
    return N;
}
int amountmoney(int sum)
{
    cout<<"Skolko polozhit: ";
    cin>>sum;
    return sum;
}
void vivod(int card[])
{
    for (int i=0;i<10;i++)
    {
        cout<<card[i]<<" ";
    }
    cout<<endl;
}
void putmoney(int N,int sum,int card[])
{
        N=cardnumber(N);
        if (N>0 && N<11)
        {
            sum=amountmoney(sum);
            cout<<endl<<sum<<endl;
            suma(sum,N,card);
            vivod(card);
        }
        else
        {
            cout<<"Error: you entered incorrect values!!!\n";
        }
}
int main()
{
    int card[10];
    int N=0,i,k=0;
    int sum=0;
    zapolnenie(card,i);
    for (;;)
    {
        putmoney(N,sum,card);
    }
    return 0;
}
