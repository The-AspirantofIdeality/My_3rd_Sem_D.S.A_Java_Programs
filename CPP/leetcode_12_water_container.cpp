#include<iostream>
#include<vector>
#include<utility>
using namespace std;
main()
{
    int n;
    int i;
    cin>>n;
    int hight[n];
    int area[n];
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter: \n";
        cin>>hight[i];
    }
    for(i=0;i<n;i++)
    {
        area[i]=i*hight[i];
    }
    for(i=0;i<n;i++)
    {

        if(area[i]>area[i+1])
        {
            swap(area[i],area[i+1]);
        }
    }
    cout<<" : "<<area[i];


}
