#include <iostream>

using namespace std;

int main()
{
    char stroka[256]{' '};
    cout<<"Enter the string>>";
    cin.getline(stroka,256);
    int ind1=0,i=0,sizze=0,maxWord=0;
    while (stroka[i]!=0)
    {
         if(((stroka[i]>='a')&&(stroka[i]<='z'))||
           ((stroka[i]>='A')&&(stroka[i]<='Z')))
            {
                sizze++;
            }
         if(!(((stroka[i+1]>='a')&&(stroka[i+1]<='z'))||
           ((stroka[i+1]>='A')&&(stroka[i+1]<='Z'))))
            {
                if (sizze>maxWord)
                {
                    maxWord=sizze;
                    ind1=i+1-sizze;
                }
                sizze=0;
            }
         i++;
     }
    cout<<"The longest word>>";
    for(i=ind1;i<=maxWord+ind1;i++)
        cout << stroka[i];
return 0;
}
