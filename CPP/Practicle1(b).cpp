//This program is prepared by 22CE137_Manav Vashi
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int RowNo,ColNo;    //here we assign two integer for dealing with row and column
    cout<<"\n**********\Writing table in perticular manner**********"<<endl<<endl;
    for(RowNo=1;RowNo<5;RowNo++)      //here we initialise Row with 1 and and goes upto 4
    {
        for(ColNo=1;ColNo<5;ColNo++)  //here we initialise Column with 1 and and goes upto 4
        {
            cout<<setw(5)<<left<<RowNo*ColNo;      //logic part
        }
        cout<<"\n";    //goes into newline after completing 1st row
    }
    cout<<"\n"<<"\"This program is prepared by 22CE137_ManavVashi\"";
    return 0;
}
