//This program is prepared by 22CE137_ManavVashi
#include<iostream>
#include<iomanip>  //itroduce iomanip header file to use function like fixed,scientific,precision(n)
using namespace std;
main()
{
    double Number1,Number2;
    cout<<"Enter the 1st number till two decimal point : ";cin>>Number1;  //take the input of 1st number
    cout<<"Enter the 2nd number till two decimal point : ";cin>>Number2;  //take the input of 2nd number
    cout<<"\n"<<scientific<<Number1+Number2;                               //use of scientific
    cout<<"\n"<<fixed<<Number1+Number2;                                   //use of fixed
    cout<<"\n"<<setprecision(2)<<Number1+Number2;                         //use of set precision
    cout<<"\n\nThis program is prepared by 22CE137_ManavVashi.";
}
