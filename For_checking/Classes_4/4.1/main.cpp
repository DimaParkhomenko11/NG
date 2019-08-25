#include <iostream>

using namespace std;

void suma(int chislo)
{
    if (chislo==0)
        cout<<"0";
    else
    {
            if (chislo/100>0)
            {
                chislo=(chislo/10)+chislo%10;
                cout<<" YYY"<<chislo<<' ';
                if (chislo/10>0)
                {

                    suma(chislo);
                }
            }
            else
            {
                chislo=(chislo/10)+chislo%10;
                cout<<"The sum of all digits in the number = "<<chislo;
            }


  }

}

int main()
{
    int sum=0;
    int chislo;
    cout<<"Enter the number>>";
    cin>>chislo;
    suma(chislo);
    return 0;
}
