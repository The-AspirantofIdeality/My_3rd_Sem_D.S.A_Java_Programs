#include<iostream>
using namespace std;
class number
{
    int num;
public:
    number()
    {
        num=0;
    }
    number(int n)
    {
        num=n;
    }
    number(const number &n)
    {
        num=n.num;
    }
    void getdata()
    {
       cout<<"Enter the Value : ";
       cin>>num;
    }
    void putdata()
    {
        cout <<"Number :"<<num<<endl;
    }
    number operator ++(int);
    number operator ++();
    number operator -();
};
number number::operator ++(int)
{
    return num++;
}
number number::operator ++()
{
   return ++num;
}
number number::operator -()
{
    return -num;
}
int main()
{
    number n1,n2,n3;
    n2.getdata();
    n1=n2++;
    n1.putdata();
    n3=++n1;
    n3.putdata();
    n3=-n3;
    n3.putdata();
    return 0;
}

