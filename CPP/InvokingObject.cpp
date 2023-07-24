#include<iostream>
using namespace std;

class currency
{

    int r,p;
public:
    void enter()
    {
        cout<<"Enter the rupee:";
        cin>>r;
        cout<<"Enter the paisa :";
        cin>>p;
    }
    void show()
    {

        cout<<"Ans="<<r<<"."<<p;
    }
    void add(currency a1, currency a2)
    {
        r=a1.r+a2.r;
        p=a1.p+a2.p;
        while(p>=100)
        {
            r=r+1;
            p=p-100;
        }
    }

    currency add(currency m1)
    {
        currency d;
        d.r=r+m1.r;
        d.p=p+m1.p;
        while(d.p>=100)
        {
            d.r=d.r+1;
            d.p=d.p-100;
        }
        return d;
    }

};


int main()
{
    currency c1,c2,c3;
    c1.enter();
    c2.enter();
    cout<<"====1st equation====="<<endl;
    c3.add(c1,c2);
    c3.show();
    cout<<endl<<"====2nd equation====="<<endl;
    c3=c1.add(c2);
    c3.show();
}
