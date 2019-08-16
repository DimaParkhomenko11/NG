#include <iostream>

using namespace std;

int main()
{
    int i=0;
    char stroka[256]{' '};
    cin.getline(stroka,256);
    while (stroka[i]!=0)
    {
        if ((stroka[i]>='a')&&(stroka[i]<='z'))
            stroka[i]=stroka[i]-32;
        cout<<stroka[i];
        i++;
    }
    return 0;
}
