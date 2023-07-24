#include<iostream>
using namespace std;
class Spoural
{
    string rg_no, name_student, name_event,event1="dance",event2="singing";
    static int Sing_Cnt,Dance_Cnt;
public:
    void getdata()
    {
        cout<<"\nEnter Registration number: ";
        cin>>rg_no;
        cout<<"\nEnter name of the student: ";
        cin>>name_student;
        cout<<"\nEnter name of the event: ";
        cin>>name_event;
        cout<<endl<<endl;
        cout<<"\nRegistration number: "<<rg_no;
        cout<<"\nname of the student is: "<<name_student;
        cout<<"\nname of the event is: "<<name_event;
        if(name_event==event2)
        {
            Sing_Cnt++;
        }
        else if(name_event==event1)
        {
            Dance_Cnt++;
        }
    }
    static void no_of_students()
    {

        cout<<"\nTotal number of students in Singing: "<<Sing_Cnt;
        cout<<"\nTotal number of students in danceing: "<<Dance_Cnt;
    }
}call;
int Spoural::Sing_Cnt;
int Spoural::Dance_Cnt;
//void Spoural::no_of_students();   //error
int main()
{
    call.getdata();
    Spoural::no_of_students();
}

