#include<iostream>
using namespace std;
class Info
{
    public:
    string NameOfStudent;
    string RollNo;
    string Class;
    char Division;
    void Collact()
    {
        cout<<"\nEnter name of the student     : ";cin>>NameOfStudent;
        cout<<"\nEnter Roll-No of the student  : ";cin>>RollNo;
        cout<<"\nEnter class of the student    : ";cin>>Class;
        cout<<"\nEnter Division of the student : ";cin>>Division;
        cout<<endl;
    }
    void Display()
    {
        cout<<"Name of the student is     : "<<NameOfStudent<<endl;
        cout<<"Roll-No the student is     : "<<RollNo<<endl;
        cout<<"Class of the student is    : "<<Class<<endl;
        cout<<"Division of the student is : "<<Division<<endl;
    }
}NoOfStudents[5];
main()
{
    int No;
    cout<<"//Input 5 students data and print it......//"<<endl;
    for(No=0;No<5;No++)
    {
        cout<<"\n\nFor Student : "<<No+1;
        cout<<"\n--------------------";
        NoOfStudents[No].Collact();
        NoOfStudents[No].Display();
    }
    cout<<"\n\n\"This program is prepared by 22CE137_ManavVashi\"";
    return 0;
}

