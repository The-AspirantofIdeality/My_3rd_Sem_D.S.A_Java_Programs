#include<iostream>
using namespace std;
class Biodata
{
    public:
    string Name,RollNo,Class,Course,YearOfGraduate;
};
main()
{
    Biodata Student[10];
    int NoOfStudents,i;
    cout<<"\nEnter the total no of students : ";cin>>NoOfStudents;
    cout<<"\nEnter the given details of the "<<NoOfStudents<<" students";
    for(i=0;i<NoOfStudents;i++){
    cout<<"\nEnter the Name of the student : ";
    getline(cin,Student[i].Name);
    cout<<"\nEnter the Course obtain by the student : ";
    getline(cin,Student[i].Course);
    cout<<"\nEnter the Class of the student : ";
    getline(cin,Student[i].Class);
    cout<<"\nEnter the Roll No of the student : ";
    getline(cin,Student[i].RollNo);
    cout<<"\nEnter the Year of Graduation of the student :";
    getline(cin,Student[i].YearOfGraduate);
    cout<<"\n\n"<<i+1;
    }
    cout<<"\nThe name of the student is : "<<Student[i].Name;
    cout<<"\nCourse obtained by the student is : "<<Student[i].Course;
    cout<<
    cout<<
    cout<<
    return 0;
}
