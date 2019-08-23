#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

void addarray(int array[])
{
    int random_number;
    srand(time(NULL));
    for (int i=0;i<10;i++)
    {
        random_number =0+rand()%100;
        array[i]=random_number;
        cout<<array[i]<<' ';
    }
}
int max_number(int array[])
{
    int numberMax=array[0];
    for (int i=1; i<10; i++)
    {
        if (array[i]>numberMax)
            numberMax = array[i];
    }
    return numberMax;
}
int min_number(int array[])
{
    int numberMin=array[0];
    for (int i=1; i<10; i++)
    {
        if (array[i]<numberMin)
            numberMin=array[i];
    }
    return numberMin;
}
bool chetnost(int array [],int number)
{
    if (array[number-1]%2==0)
        return true;
    else
        return false;
}
void function_5(int array[])
{
    for (int i=0;i<10;i++)
    {
        if (array[i]%2==0)
            array[i]=array[i]-1;
        else
          array[i]=array[i]*2;
        cout<<array[i]<<' ';
    }
}
void array_cleaning(int array[])
{
     for (int i=0;i<10;i++)
    {
        array[i]=0;
        cout<<array[i]<<' ' ;
    }

}
bool letter(int number)
{   int k=0;
    if (number>=97 && number<=122 || number>=65 && number<=90)
         return true;
    else
        return false;
}
int main()
{
    int number;
    int array[10];
    cout<<"\nFunction 1\n"
        <<"Random array = ";
    addarray(array);
    cout<<"\nFunction 2\n";
    cout<<"Max number in array = "<<max_number(array);
    cout<<"\nFunction 3\n";
    cout<<"Min number in array = "<<min_number(array);
    cout<<"\nFunction 4\n";
    cout<<"Enter array element>>";
    cin>>number;
    cout<<"check element "<<array[number-1]<<" for parity = "<<boolalpha<<chetnost(array,number);
    cout<<"\nFunction 5\n";
    cout<<"All odd numbers in the array are multiplied by 2, and it took away even numbers 1.\n"
        <<"array = ";
    function_5(array);
    cout<<"\nFunction 6\n"
        <<"Clear array = ";
    array_cleaning(array);
    number=0;
    cout<<"\nFunction 7\n";
    cout<<"Enter the number>>";
    cin>>number;
    cout<<"Your number = ";
    if (letter(number)==true)
        cout<<(char)number;
    else
        cout<<number;

    return 0;
}
