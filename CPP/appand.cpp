#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream file;
    file.open("appand.txt",ios::out);
    file<<"\nI am The A.I.";
    file.close();
    file.open("appand.txt",ios::in);
    char ch;
    cout<<endl;
    while(!file.eof())
    {
        file>>ch;
        cout<<ch;
    }
    file.close();
    file.open("appand.txt",ios::app);
    file<<"\nI am 18 years old";
    file.close();
    file.open("appand.txt",ios::in);
    cout<<endl;
    while(!file.eof())
    {
        file>>ch;
        cout<<ch;
    }
    file.close();
}
