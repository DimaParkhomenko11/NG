#include <iostream>

using namespace std;

void suma(int chislo,int sum)
{
  if (chislo==0)
      cout<<"0";
  else
  {
      sum=chislo/10+chislo%10;
      cout<<"The sum of all digits in the number = "<<sum;
  }
}

int main()
{
    int sum=0;
    int chislo;
    cout<<"Enter the number>>";
    cin>>chislo;
    suma(chislo,sum);
    return 0;
}

