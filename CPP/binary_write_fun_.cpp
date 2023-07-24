#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream file;
    file.open("binary.txt",ios::binary);
    int p=1234,x;
    file.write((char*)&p,sizeof(p));
    file.read((char*)&x,sizeof(x));
    file.close();
    cout<<"\nvlaue of p: "<<x;
}
