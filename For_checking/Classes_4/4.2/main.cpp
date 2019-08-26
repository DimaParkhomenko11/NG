#include <iostream>

using namespace std;

void space(int sizze)
{
    for (int space=0;space<sizze;space++)
            cout<<" ";

}
void star(int sizze)
{
        for (int widthPos=0;widthPos<sizze;widthPos++)
        {
            cout<<"*";
        }
}
void leg(int sizze)
{
    for (int heightPos=1;heightPos<sizze;heightPos++)
    {
        cout<<" ";
    }
    cout<<"*";
}
void schetchik(int sizze)
{
     for (int heightPos=1;heightPos<=sizze;heightPos++)
    {
        space(sizze-heightPos);
        star(heightPos*2-1);
        cout<<endl;
    }
}
void tree(int sizze)
{
  schetchik(sizze);
  leg(sizze);
}



int main()
{
 cout<<"Enter the size of the Christmas tree>>";
 int sizze;
 int heightPos=1;
 int widthPos=0;
 cin>>sizze;
 tree(sizze);

return 0;
}
