#include <iostream>
#include <algorithm>

using namespace std;

struct student
{
    string name;
    string surname;
    int old;
    string gender;
};
struct kurator
{
    string name;
    string surname;
    int old;
    string gender;
    string rang;

};
class Univer
{
public:
void addStud();
void showAll();
void dellStud();
void addKurat();
string showKurat();
void addFakultet(int f);
void Sort();
void findStud(int f);
private:
    student Stud[100];
    kurator Kurat;
    int kolStud=0;
    string Fakultet;

};
void Univer::addStud()
{
        cout<<"\nEnter name: ";
        cin>>Stud[kolStud].name;
        cout<<"Enter last name: ";
        cin>>Stud[kolStud].surname;
        cout<<"Enter age: ";
        cin>>Stud[kolStud].old;
        cout<<"Enter the gender: ";
        cin>>Stud[kolStud].gender;
    kolStud+=1;
}
void Univer::showAll()
{
    for (int i=0;i<kolStud;i++)
    {
    cout<<"\nName: ";
    cout<<Stud[i].name<<endl;
    cout<<"Surname: ";
    cout<<Stud[i].surname<<endl;
    cout<<"Age: ";
    cout<<Stud[i].old<<endl;
    cout<<"Gender: ";
    cout<<Stud[i].gender<<endl;
    }
}
void Univer::dellStud()
{
    Stud[kolStud-1].name="";
    Stud[kolStud-1].surname="";
    Stud[kolStud-1].old=0;
    Stud[kolStud-1].gender="";
    kolStud-=1;
}
void Univer::addKurat()
{
    cout<<"\Enter name: ";
    cin>>Kurat.name;
    cout<<"Enter last name: ";
    cin>>Kurat.surname;
    cout<<"Enter age: ";
    cin>>Kurat.old;
    cout<<"Enter the gender: ";
    cin>>Kurat.gender;
    cout<<"Enter academic title: ";
    cin>>Kurat.rang ;
}
string Univer::showKurat()
{
    return Kurat.surname;
}
void Univer::addFakultet(int f)
{
    if (f==0)
    {
        cout<<"Enter the name of the faculty: ";
        cin>>Fakultet;
    }
    else
    {
        cout<<"Error: you cannot change the faculty!!!\n";
    }
}
void Univer::Sort()
{
for (int i=0;i<kolStud;i++)
{
    transform(Stud[i].surname.begin(),Stud[i].surname.end(),Stud[i].surname.begin(), ::tolower);
}
for(int i = 1; i < kolStud; ++i)
{

	for(int r = 0; r < kolStud-i; r++)
	{
		if(Stud[r].surname[0]>Stud[r+1].surname[0])
		{
			string temp = Stud[r].surname;
			Stud[r].surname=Stud[r+1].surname;
			Stud[r+1].surname=temp;
		}
		if(Stud[r].surname[0]==Stud[r+1].surname[0])
        {
            for (int k=1;k<10;k++)
            {
                if(Stud[r].surname[0+k]>Stud[r+1].surname[0+k])
                {
                    string temp = Stud[r].surname;
                    Stud[r].surname=Stud[r+1].surname;
                    Stud[r+1].surname=temp;
                }
            }

        }
	}
}

for(int i = 0; i < kolStud; ++i)
{
	for(int t = 0; t < Stud[i].surname.size(); t++)
    {
        if (Stud[i].surname[t]>='a' && Stud[i].surname[t]<='z')
        {
            Stud[i].surname[0]=toupper(Stud[i].surname[0]);
        }
    }


	cout <<i+1<<". "<<Stud[i].surname<<endl;
}
cout << endl;
}
void Univer::findStud(int f)
{
    string fStud;
    int fageStud,i;

        if(f==1)
        {
            cout<<"Enter a name to search for: ";
            cin>>fStud;
            for(i=0;i<kolStud;i++)
            {
                if(fStud==Stud[i].name)
                {
                    cout<<"\nName: ";
                    cout<<Stud[i].name<<endl;
                    cout<<"Surname: ";
                    cout<<Stud[i].surname<<endl;
                    cout<<"Age: ";
                    cout<<Stud[i].old<<endl;
                    cout<<"Gender: ";
                    cout<<Stud[i].gender<<endl;
                }
            }
        }
        if(f==2)
        {
            cout<<"Enter last name to search: ";
            cin>>fStud;
            for(i=0;i<kolStud;i++)
            {
                if(fStud==Stud[i].surname)
                {
                    cout<<"\nName: ";
                    cout<<Stud[i].name<<endl;
                    cout<<"Surname: ";
                    cout<<Stud[i].surname<<endl;
                    cout<<"Age: ";
                    cout<<Stud[i].old<<endl;
                    cout<<"Gender: ";
                    cout<<Stud[i].gender<<endl;
                }
            }
        }
        if(f==3)
        {
            cout<<"Enter the age to search: ";
            cin>>fageStud;
            for(i=0;i<kolStud;i++)
            {
                if(fageStud==Stud[i].old)
                {
                    cout<<"\nName: ";
                    cout<<Stud[i].name<<endl;
                    cout<<"Surname: ";
                    cout<<Stud[i].surname<<endl;
                    cout<<"Age: ";
                    cout<<Stud[i].old<<endl;
                    cout<<"Gender: ";
                    cout<<Stud[i].gender<<endl;
                }
            }
        }
        if(f==4)
        {
            cout<<"Enter the age to search: ";
            cin>>fStud;
            for(i=0;i<kolStud;i++)
            {
                if(fStud==Stud[i].gender)
                {
                    cout<<"\nName: ";
                    cout<<Stud[i].name<<endl;
                    cout<<"Surname: ";
                    cout<<Stud[i].surname<<endl;
                    cout<<"Age: ";
                    cout<<Stud[i].old<<endl;
                    cout<<"Gender: ";
                    cout<<Stud[i].gender<<endl;
                }
            }
        }
}
void MENU()
{
    cout<<"\n______MENU____________\n"
        <<"Press 1 to add student\n"
        <<"Enter 2 to display all students\n"
        <<"Enter 3 to delete student\n"
        <<"Enter 4 to set the group curator\n"
        <<"Enter 5 to set up faculty\n"
        <<"Enter 6 to show group supervisor\n"
        <<"Enter 7 to sort students by last name\n"
        <<"Enter 8 to find a student by: name / surname / gender / age\n"
        <<"Enter 0 to close the program\n"
        <<"Your actions>>";
}
void MENU2()
{
    cout<<"\n____Student search_______\n"
        <<"Enter 1 to search by name\n"
        <<"Enter 2 to search by last name\n"
        <<"Enter 3 to search by age\n"
        <<"Enter 4 to search by gender\n"
        <<"Enter 0 to go back\n"
        <<"Your actions>>";
}
int main()
{
    int q=0,f=0;
    Univer CNTU;

    do
    {
        MENU();
        cin>>q;
        if (q==1)
        {
            CNTU.addStud();
        }
         if (q==2)
        {
            CNTU.showAll();
        }
         if (q==3)
        {
            CNTU.dellStud();
        }
         if (q==4)
        {
            CNTU.addKurat();
        }
         if (q==5)
        {
            CNTU.addFakultet(f);
            f=1;
        }
        if (q==6)
        {
            cout<<CNTU.showKurat();
        }
        if (q==7)
        {
            CNTU.Sort();
        }
        if (q==8)
        {
            int f=0;

            do
            {
                MENU2();
                cin>>f;
                CNTU.findStud(f);

            }while(!(f==0));


        }
    }while(!(q==0));
    return 0;
}
