#include <iostream>

using namespace std;

void space(int sizze,int heightPos,int widthPos)
{
    for (widthPos=0;widthPos<sizze-heightPos;widthPos++)
        {
            cout<<" ";
        }
}
void star(int sizze,int heightPos,int widthPos)
{

        for (widthPos=0;widthPos<heightPos*2-1;widthPos++)
        {
            cout<<"*";
        }
}
void leg(int sizze,int heightPos,int widthPos)
{
    for (heightPos=1;heightPos<sizze;heightPos++)
    {
        cout<<" ";
    }
    cout<<"*";
}
void tree(int sizze,int heightPos,int widthPos)
{
  for (heightPos=1;heightPos<=sizze;heightPos++)
    {
        space(sizze,heightPos,widthPos);
        star(sizze,heightPos,widthPos);
        cout<<endl;
    }
}



int main()
{
 cout<<"Enter the size of the Christmas tree>>";
 int sizze;
 int heightPos=1;
 int widthPos=0;
 cin>>sizze;
tree( sizze, heightPos, widthPos);
leg(sizze,heightPos,widthPos);

return 0;
}
