#include<iostream>
#include<iomanip>
using namespace std;
ostream& manip(ostream& output)
{
    output.width(10);
    output<<setfill('$');
    output.setf(ios::showpoint);
    output<<setprecision(4);
    return output;
}
main()
{
    cout<<manip<<20.00000;
    return 0;
}
