#include <iostream>
using namespace std;

int main()
{
    int i=0,q=0;
    int N=0;
    char stroka[256]{' '};
    cin.getline(stroka,256);
    stroka[-1]=' ';
    while (stroka[i]!=0)
    {
        if ((stroka[i]<'a')||(stroka[i]>'z'))
        if ((stroka[i]<'A')||(stroka[i]>'Z'))
            stroka[i]=' ';
        if (stroka[i]!=' ')
        {
            if (stroka[i-1]==' ')
            {
                N++;
            }
        }
        i++;
    }
    cout<<"You have "<<N<<" words";
    return 0;
}
