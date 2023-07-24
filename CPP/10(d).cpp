#include<iostream>
using namespace std;
int main()
{
char name[20];
cout<<"\nEnter first name then white space and then last name of a person: ";
cin>>name;
cout<<"\nPerson Name : "<<name<<endl;
cout<<"Enter first name then white space and then last name of a person: "<<endl;
cin.getline(name,5);
cout.write(name,5);
cout<<"\nAgain Enter first name then white space and then last name of a person: "<<endl;
cin.getline(name,13);
cout.write(name,11);
return 0;
}
