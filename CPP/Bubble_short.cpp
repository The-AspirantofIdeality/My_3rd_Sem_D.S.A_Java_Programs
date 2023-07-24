#include<iostream>       // time complexity=n^2
using namespace std;    // true value=n
int main()
{
    int n,i,j,arr[1000];
    cout<<"\nEnter to total number of elements in the array: -";
    cin>>n;
    cout<<"Enter array: -"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(j=n-1;j>0;j--)
    {
        for(i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                arr[i]=arr[i]+arr[i+1];
                arr[i+1]=arr[i]-arr[i+1];
                arr[i]=arr[i]-arr[i+1];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }

}
