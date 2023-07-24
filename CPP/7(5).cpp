#include<iostream>
using namespace std;
class celsius
{
    float t;
    public:
    celsius()
    {

    }
    celsius(float x)
    {
        t = (x - 32) / 1.8;
    }
    void print()
    {
        cout << "temperature in celsius is : " << t << endl;
    }
    int get()
    {
        return t;
    }
};
class faranheat
{
    float t1;
    public:
    faranheat()
    {
        t1=5;
    }
    faranheat(celsius c1)
    {
        t1=c1.get()*1.8+32;
    }
    operator celsius()
    {
        return celsius(t1);
    }
    void print()
    {
        cout << "temperature in faranheat is : " << t1 << endl;
    }
};
int main()
{
    celsius c1;
    celsius c2;
    c2=5.0;
    c2.print();
    faranheat f1,f2;
    f1=c2;
    f1.print();
    c1=f2;
    c1.print();
    return 0;
}

