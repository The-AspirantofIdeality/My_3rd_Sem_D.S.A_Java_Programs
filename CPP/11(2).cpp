#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
   float height[5];//{123.1,145.20,167.345,189.3357,143.431};
   for(int i=0;i<5;i++)
   {
    cout<<"Enter Height of student "<<i+1<<" : ";
    cin>>height[i];
   }

   ofstream o;
   o.open("Binary");
   o.write((char*)&height,sizeof(height));
   o.close();

   ifstream a;
   a.open("Binary");
   a.read((char*)&height,sizeof(height));
   a.close();


   for(int i=0;i<5;i++)
   {
    cout<<"Height of student "<<i+1<<" :- ";
    cout<<fixed<<setprecision(2)<<height[i]<<endl;
   }
}
