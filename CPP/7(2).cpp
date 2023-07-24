#include<iostream>
using namespace std;
class complax
{
    int real,img;
public:
complax(int x,int y)
    {
        real=x;
        img=y;
    }
   friend void operator-(complax &a)
    {
        a.real=-a.real;
        a.img=-a.img;
    }
    void print()
    {
        cout<<real<<"+"<<"("<<img<<")"<<"i"<<endl;
    }
};
int main()
{
    complax ob1(8,11);
    ob1.print();
    -ob1;
    ob1.print();
}

