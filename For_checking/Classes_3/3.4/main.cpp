#include <iostream>

using namespace std;

int main()
{
    int i=0,w=0;
    char stroka[256],ABC[26];
    int letter[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    cout<<"Enter the string>>";
    cin.getline(stroka,256);
        while (stroka[i]!=0)
        {
            for (w=97;w<123;w++)
            {
                if (stroka[i]==w || stroka[i]==w-32)
                letter[w-97]++;
                ABC[w-97]=w;
            }
            i++;
        }
        for(i=0;i<26;i++)
        {
            for(int k=0;k<25-i;k++)
            {
                if(letter[k]<letter[k+1])
                {
                    int sortt=letter[k];
                    int sortt2=ABC[k];
                    letter[k]=letter[k+1];
                    ABC[k]=ABC[k+1];
                    letter[k+1]=sortt;
                    ABC[k+1]=sortt2;
                }
            }
        }
        for (w=65;w<91;w++)
        {
            if (letter[w-65]!=0)
                cout<<ABC[w-65]<<"-"<<letter[w-65]<<endl;
        }
    return 0;
}
