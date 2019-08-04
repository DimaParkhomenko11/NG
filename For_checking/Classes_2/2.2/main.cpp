#include <iostream>

using namespace std;

int main()
{
    int card[10] = {0,0,0,0,0,0,0,0,0,0};
    int N;
    int sum;

    for (;;) {

    cout<<"Vvedi nomer kartochki: ";
    cin>>N;
    cout<<"Skolko polozhit: ";
    cin>>sum;
    card[N-1]+=sum;

    for (int i=0;i<10;i++)
        cout<<card[i]<<" ";
    cout<<endl;
}
    return 0;
}
