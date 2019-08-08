#include <iostream>

using namespace std;

int main()
{
    int number[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i=-1;
    int sizze=0;
    int End=0;
    do
    {
        i++;
        cin>>number[i];
        if (number[i]>0)
        {
            if ((number[i]%2==0))
                {
                    cout<<"Error: you entered a pair number!!!";
                    End=1;
                    number[i]=0;
                }
        }
        if (i==19)
            number[i]=0;
    }while(number[i]!=0);
    cout<<endl;
    if (End==0)
    {
    for (int i=0;i<20;i++)
    {
       if (number[i]>0)
           sizze++;
    }
    int numberMax=number[0];
    for (int i=1; i<20; i++)
    {
        if (number[i]>numberMax)
            numberMax = number[i];
    }

    for (int line=0;line<sizze;line++)
    {
        for (int space=0;(space<(numberMax-number[line])/2);space++)
        {
            cout<<" ";
        }
        for ( int star=0;star<number[line];star++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    }
    return 0;
}
