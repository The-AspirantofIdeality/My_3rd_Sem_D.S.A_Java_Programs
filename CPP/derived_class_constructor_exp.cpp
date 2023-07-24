#include<iostream>
using namespace std;
class Base
{
protected:
int x;
public:
virtual void fun() = 0;
Base(int i) { i = 1;
x=i; }
};
class Derived: public Base
{
public:
void fun() {
cout << "x = " << x;
}
};
int main(void)
{
Derived d;
d.fun();
return 0;
}
