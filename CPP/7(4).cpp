#include <iostream>
using namespace std;
class celsius
{
    float t;
public:
    celsius()
    {
        // t=30.5;
    }
    celsius(float t1)
    {
        t = (t1 - 32) / 1.8;
    }
    operator float()
    {
        float f;
        f= (9*t)/5+32;
        return f;
    }
    void print()
    {
        cout << "temperature in celsius is : " << t << endl;
    }
};
int main()
{
    float temp=30.5;
    celsius c1;
    c1 = temp;
    c1.print();
    //celsius c2;
    temp=c1;
    cout << "temperature in faranheat is : " << temp << endl;
    return 0;
}

