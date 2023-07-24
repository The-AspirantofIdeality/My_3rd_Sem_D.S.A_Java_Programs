#include<iostream>
using namespace std;
void selection_short();
int main()
{
    selection_short();
}
void selection_short()
{
    int i,j,n,mini_temp,temp;
    cout<<"\nEnter the total no of elements: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        mini_temp=i;

        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mini_temp])
            {
                mini_temp=j;
            }
        }
        temp=arr[mini_temp];
        arr[mini_temp]=arr[i];
        arr[i]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
}
