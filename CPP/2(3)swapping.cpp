#include<iostream>
using namespace std;
class swapping
{
    double Number1;
    double Number2;
    public:
    void getdata();    //creating no return no argument type function
    void putdata();
}Answer;
void swapping::getdata()    //defination part of the function
{
    cout<<"\nEnter 1st Number : ";cin>>Number1;  //taking input of two numbers
    cout<<"\nEnter 2nd Number : ";cin>>Number2;
    cout<<endl<<endl;
    cout<<"\n1st Number is : "<<Number1;
    cout<<"\n2nd Number is : "<<Number2<<endl;
    Number1=Number1+Number2;      //appling logic of swapping
    Number2=Number1-Number2;
    Number1=Number1-Number2;
}
void swapping::putdata()          //defination part of another function
{
    cout<<"\nAfter swapping........";
    cout<<"\n\n1st Number is : "<<Number1<<endl;
    cout<<"2nd Number is : "<<Number2<<endl;
}
main()
{
   Answer.getdata();    //calling of the function
   Answer.putdata();
   cout<<"\n\"This program is prepared by 22CE137_ManavVashi\"";
   return 0;
}
