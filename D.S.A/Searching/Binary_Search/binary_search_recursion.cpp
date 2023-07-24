#include<iostream>
using namespace std;
int recursive(int* ,int ,int ,int ,int );

int main()
{
    int arr[100],j,h,l,found,n;
    cout<<"Enter no of array element: ";
    cin>>n;

    cout<<"\nEnter array elements: -";
    for(int a=0;a<n;a++)
    {
        cin>>arr[a];
    }

    cout<<"\nEnter the element which you want to find: ";
    cin>>found;
    l=0;
    h=n-1;
    j=(l+h)/2;

    recursive(arr,j,h,l,found);
}

int recursive(int *arr,int j,int h,int l,int found)
{

    if(found==arr[j])
    {
        cout<<"\nyour desired no is at "<<j<<"th position.";
        return 0;
    }
    else if(found>arr[j])
    {
        j=(j+h)/2;
    }
    else if(found<arr[j])
    {
        j=(j+l)/2;
    }
    recursive(arr,j,h,l,found);
}


