#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream readobj;
    readobj.open("Read.txt",ios::in);
    char ch;
    while(!readobj.eof()) //eof() return 1 when complete file is readen.
    {
        readobj>>ch;
        cout<<ch;
    }
}
