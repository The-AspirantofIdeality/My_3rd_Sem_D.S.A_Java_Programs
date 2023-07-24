#include<iostream>
#include<string.h>
using namespace std;
class str
{
    char a[10];
    int i=1;
public:
    void get()
    {
        cout<<"Enter string :-";
        cin>>a;
    }
    void display()
    {
        cout<<endl<<a;
    }
    str operator+(str c)
    {
        str ob1;
        strcpy(ob1.a,a);
        strcat(ob1.a,c.a);
        return ob1;
    }
    str operator+=(str d)
    {
        str ob2;
        strcat(a,d.a);
        return ob2;
    }
    int operator>(str e) //if(s1>s2)
    {
        if(strcmp(a,e.a)>0)
            return 1;
        else
            return 0;
    }
    int operator<(str f)
   {
        if(strcmp(a,f.a)<0)
            return 1;
        else
            return 0;

    }
    int operator==(str f)
    {
        if(strcmp(a,f.a)==0)
            return 1;
        else
            return 0;

    }
};
int main()
{
    str s1,s2,s3;
    s1.get();
    s2.get();
    //s3=s1+(s2);
    //s3.display();
    //s1+=(s2);
    //s1.display();
    if(s1>s2)
        cout<<"S1 is larger";
    else if(s1<s2)
        cout<<"S2 is larger";
    else if(s1==s2)
        cout<<"both string are equal";
}

