#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ofstream dataobj ("Data.txt");
    dataobj<<"Hello,I am writing something in the file";
    dataobj.close();
    return 0;
}
