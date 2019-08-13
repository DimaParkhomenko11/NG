#include <iostream>

using namespace std;

int main()
{
    int number[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i=0;
    int sizze=0;
    int End=0;
    do
    {
        cin>>number[i];
        while ((number[i]%2==0)&&(number[i]!=0))
        {
            cout<<"Error: you entered a pair number!!!\nTry egain: ";
            cin>>number[i];
        }
     i++;
    }while(number[i-1]!=0 && i<20);
    //if (End==0)
   // {
    for (int i=0;i<20;i++)
    {
        cout<<number[i];
       if (number[i]>0)
           sizze++;
    }
   /* int numberMax=number[0];
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
    }*/

   // }
    return 0;
}
