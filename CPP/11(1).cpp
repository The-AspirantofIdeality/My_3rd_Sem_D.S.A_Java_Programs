#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
    fstream fp;
    char str[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "OPEN FILE AND STORE CHARACTER"<<endl;
    int len = strlen(str);

    fp.open("Alphabets", ios::out);
    for (int i = 0; i < len; i++)
    {
        fp.put(str[i]);
    }
    fp.close();
    fp.open("Alphabets", ios::in);
    cout <<"READING FROM FILE : \n";
    fp.seekg(-1, ios::end);
    cout << "FP : " << fp.tellg() << endl;
    char ch;
    while (fp.tellg() >= 0)
    {
        fp.get(ch);
        cout << ch;
        fp.seekg(-2, ios::cur);
    }
    fp.close();

    ifstream in("Alphabets");
    cout<<endl<<"good() :"<<in.good();
    cout<<endl<<"fail() :"<<in.fail();
    cout<<endl<<"bad() :"<<in.bad();
    cout<<endl<<"eof() :"<<in.eof();
    cout << endl;
    return 0;
}
