#include<iostream>
using namespace std;
class shape
{
    char shape_name[15];
public:
    void get()
    {
        cout<<"Enter the name of shape :";
        cin>>shape_name;
    }
    void print()
    {
        cout<<endl<<"name of shape :- "<<shape_name;
    }
};
class circle:public shape
{
protected:
    float redius;
public:
    void get1()
    {
       cout<<"Enter the redius of circle :";
        cin>>redius;
    }
    void print1()
    {
       cout<<endl<<"redius of circle :- "<<redius;
    }
};
class area:public circle
{
    float a;
public:
    float Area()
    {
        a=3.14*redius*redius;
        return a;
    }
    void display()
    {
        cout<<endl<<"area of circle :- "<<a<<endl;
   }
};
int main()
{
    area a1;
    a1.get();
    a1.get1();
    a1.Area();
    a1.print();
    a1.print1();
    a1.display();
}

