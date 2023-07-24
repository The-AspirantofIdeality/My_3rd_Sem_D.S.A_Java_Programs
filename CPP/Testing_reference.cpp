#include<iostream>
using namespace std;
class name
{
    int a,b;
public:
    void add(name&,name&)
    {
        cout<<a+b;

    }
}call;
main()
{
    int a=1,b=0;
    call.add(a,b);
}
