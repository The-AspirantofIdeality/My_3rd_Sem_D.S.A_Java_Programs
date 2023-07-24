#include<iostream>
using namespace std;
class hospital
{
    int rollNo;
    char name[30];
public:
    void get()
    {
        cout<<"Enter Roll No. :";
        cin>>rollNo;
        cout<<"Enter name :";
        cin>>name;
    }
    void print()
    {
        cout<<endl<<"Roll No. :- "<<rollNo<<endl<<"Name :- "<<name;
    }

};
class ward:virtual public hospital
{
    int wardNumber;
    public:
        void get1()
        {
            cout<<"Enter the Ward Number :";
            cin>>wardNumber;
        }
        void print1()
        {
            cout<<endl<<"Ward Number :- "<<wardNumber;
        }

};
class room:public virtual hospital
{
    int bedNumber;
    char nuture_of_illness[15];
public:
    void get2()
    {
        cout<<"Enter Bed Number :";
        cin>>bedNumber;
        cout<<"Enter nuture of illness :";
        cin>>nuture_of_illness;
    }
    void print2()
    {
        cout<<endl<<"Bed Number :- "<<bedNumber<<endl<<"nuture of illness :- "<<nuture_of_illness<<endl;

    }
};
class patient:public ward,public room
{

};
int main()
{
    int i;
    patient p[5];
    for(i=0;i<5;i++)
    {
    cout<<endl<<"Enter details of patient:"<<i+1<<endl;
    p[i].get();
    p[i].get1();
    p[i].get2();
    }
    for(i=0;i<5;i++)
    {
    cout<<endl<<"Details of patient:"<<i+1;
    p[i].print();
    p[i].print1();
    p[i].print2();
    }
}

