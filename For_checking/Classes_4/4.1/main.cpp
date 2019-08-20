#include <iostream>

using namespace std;




void suma(int chislo,int sum,int i)
{

    //sum=chislo;
    if (i<chislo)
    {
        i++;
        sum=sum+i;


     suma(chislo,sum,i);
    }
    else
        cout<<"The sum of all digits in the number = "<<sum<<endl;

}

int main()
{
    int sum=0,i=0;
    int chislo;
    cout<<"Enter the number>>";
    cin>>chislo;
    suma(chislo,sum,i);

    return 0;
}
