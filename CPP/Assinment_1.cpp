 #include<iostream>
using namespace std;
void print(int m,double n=87.6)
{
 cout<<"m ="<<m+10<<endl;
}
void print(double m, char ch='a')
{
 cout<<"ch = "<<ch<<endl;
}
int main()
{
    print('c',97);
    print(62.3f,100);
    return 0;
}
