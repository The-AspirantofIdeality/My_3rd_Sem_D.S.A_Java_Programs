#include<iostream>
using namespace std;
class Dollar;
class Rupee
{
    int rupees,paisa;
public:
    void getinfo()
    {
        cout<<"\nEnter Rupees: ";
        cin>>rupees;
        cout<<"\nEnter Paisa: ";
        cin>>paisa;
        cout<<"\n\nRupees: "<<rupees;
        cout<<"\nPisa: "<<paisa;
    }
    friend void add(call1,call2)
    {

    }

}call1;
class Dollar
{
    int dollars,cents;
public:
    void getdata()
    {
        cout<<"\nEnter Dollars: ";
        cin>>dollars;
        cout<<"\nEnter cents: ";
        cin>>cents;
        cout<<"\n\nDollar: "<<dollars;
        cout<<"\ncents: "<<cents;
    }
}call2;
main()
{

}
