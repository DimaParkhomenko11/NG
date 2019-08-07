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
    if ((N==1)||(N==2)||(N==3)||(N==4)||(N==5)||(N==6)||(N==7)||(N==8) ||(N==9)||(N==10))
    {

        cout<<"Skolko polozhit: ";
        cin>>sum;
        card[N-1]+=sum;
        for (int i=0;i<10;i++)
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
