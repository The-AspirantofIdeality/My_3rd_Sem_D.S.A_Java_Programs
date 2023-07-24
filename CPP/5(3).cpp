#include<iostream>
using namespace std;
class alpha
{
    int x;
public:
    alpha(int a)
    {
        x=a;
    }
    void print()
    {
        cout<<endl<<"x = "<<x;
    }
};
class beta
{
    float y;
    public:
    beta(float b)
    {
        y=b;
    }
    void print1()
    {
        cout<<endl<<"y = "<<y;
    }
};
class gamma:public alpha,public beta
{
    int m,n;
public:
    gamma(int o,int p,int x,int y):alpha(x),beta(y)
    {
        m=o;
        n=p;
    }
    void display()
    {
        cout<<"m = "<<m<<endl<<"n = "<<n;
    }
};
int main()
{
    gamma g1(10,20,30,40);
    g1.display();
    g1.print();
    g1.print1();
}
