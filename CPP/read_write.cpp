#include<iostream>
#include<fstream>
using namespace std;
main()
{
    string name,str;
    int roll_no;
    ofstream writeobj ("Info.txt");
    /*
    fstream writeobj;
    writeobj.open("Info.txt",ios::out);
    */
    cout<<"tell name: ";
    cin>>name;
    cout<<"\ntell roll no: ";
    cin>>roll_no;
    writeobj<<name;
    writeobj<<roll_no;
    writeobj.close();
    ifstream readobj("Info.txt");
    readobj>>name;
    readobj>>roll_no;
        cout<<"\nIn the file: "<<endl;
        cout<<name;
        cout<<"\n"<<roll_no;

}
