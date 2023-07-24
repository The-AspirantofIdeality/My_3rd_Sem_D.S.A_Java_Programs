#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    double Number1,Number2;        //declaring two variables Number1 and Number2
    cout<<"\nEnter 1st number till two decimal point : ";cin>>Number1;      //taking the input of Student1 from user
    cout<<"\nEnter 2nd number till two decimal point : ";cin>>Number2;      //taking the input of Student2 from user
    cout<<"\n"<<fixed<<Number1+Number2;                                     //use of fixed
    cout<<"\n"<<scientific<<Number1+Number2;                                //use of scientific
    cout<<"\n"<<setprecision(2)<<Number1+Number2;                           //use of setprecision()
}
