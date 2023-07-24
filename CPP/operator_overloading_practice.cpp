#include<iostream>
using namespace std;
class A
{
    int a,b;
public:
    A()
    {
        int x=5,y=2;
        a=x;
        b=y;
    }
     A operator -();
    putdata()
    {
        cout<<"\na= "<<a;
        cout<<"\nb= "<<b;
    }
}c1,c2;
A A :: operator -()
{
    A call;
    call.a=-a;
    call.b=-b;
    return call;
}
main()
{
    c2=-c1;
    c2.putdata();
}
