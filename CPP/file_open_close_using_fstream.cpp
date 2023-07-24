#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream file;
    file.open("Hello.txt",ios::out);
    file<<"You are in the file.";
    if(file)                              //if file is successfully created then object return 0;
    {
        cout<<"\nFile is created successfully";
    }
    else
    {
        cout<<"\nFile is failed.";
    }
    file.close();
    file.open("Hello.txt",ios::in);
    if(file)
    {
        cout<<"\nFile is opened successfully.";
    }
    else
    {
        cout<<"\nFile is failed.";
    }
    file.close();

}
