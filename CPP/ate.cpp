#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream file;
    file.open("ate.txt",ios::out);
    file<<"Hello!!";
    file.close();
    file.open("ate.txt",ios::ate);  //pointer at the starting int the file
    file.close();
}
