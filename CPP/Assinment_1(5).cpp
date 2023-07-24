 #include<iostream>
using namespace std;
int f(bool b3,bool b1)
{
    return ((b1*10)+b3);
}
int main()
{    bool b;
       cout<<"b="<<b<<endl;
bool b1=true,b3=5;
cout<<f(b1,b3);
}
