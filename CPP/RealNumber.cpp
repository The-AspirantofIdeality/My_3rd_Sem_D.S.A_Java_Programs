#include<iostream>
using namespace std;
main()
{
    int num,i,check=0;
    cin>>num;
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            check++;
        }
    }
    if(check>=2)
    {
        cout<<"Number is not real";
    }
    else{
        cout<<"Number is real.";
    }
}
