#include<iostream>
using namespace std;
class Spoural
{
    string rg_no, name_student, name_event;
    static int Sing_Cnt;
    static int Dance_Cnt;
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
    }

    static void no_of_student();
}call;
int main()
{
    int Spoural::Sing_Cnt;
}
