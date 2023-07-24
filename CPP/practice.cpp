#include<iostream>
using namespace std;
class Biodata
{
    string Name;
    string RollNo;
    string Class;
    string Course;
    string YearOfGraduate;
}Student[10];
main()
{
    int NoOfStudents,i;
    cout<<"\nEnter the total no of students : ";cin>>NoOfStudents;
    cout<<"\nEnter the given details of the "<<NoOfStudents<<"students";
    for(i=0;i<NoOfStudents;i++){
    cout<<"\nEnter the Name of the student : ";cin>>Student[i].Name;
    cout<<"\nEnter the Course obtain by the student : ";cin>>Student[i].Course;
    cout<<"\nEnter the Class of the student : ";cin>>Student[i].Class;
    cout<<"\nEnter the Roll No of the student : ";cin>>student[i].RollNo;
    cout<<"\nEnter the Year of Graduation of the student :";cin>>Student[i].YearOfGraduate;
    cout<<"\n\n"<<i+1;
    }
    return 0;
}
