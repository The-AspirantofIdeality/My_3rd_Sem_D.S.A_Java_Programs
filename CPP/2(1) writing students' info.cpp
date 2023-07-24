#include<iostream>
using namespace std;
struct Collage_Details
{
    char collage_name[10];
    char collage_code[10];
    char department[5];
    int intake;
    void getdata()
    {
        cout<<"+++++Enter collage information+++++"<<endl<<endl;;
        cout<<"Enter the name of the collage name  : ";
        cin>>collage_name;
        cout<<"\nEnter the code of the collage       : ";
        cin>>collage_code;
        cout<<"\nEnter the department of the collage : ";
        cin>>department;
        cout<<"\nEnter the intake of the collage     : ";
        cin>>intake;
        cout<<endl;
    }
    void putdata()
    {
        cout<<"*****The Information of the collage*****"<<endl<<endl;
        cout<<"The name of the collage is \t: "<<collage_name<<endl;
        cout<<"the code of the collage is \t: "<<collage_code<<endl;
        cout<<"the department of the collage is: "<<department<<endl;
        cout<<"the intake of the collage is   \t: "<<intake<<endl;

    }
}Collage1;

main()
{
    Collage1.getdata();
    Collage1.putdata();
    cout<<"\n\"This program is prepared by 22CE137_ManavVashi.\""<<endl;;
}
