#include<iostream>
using namespace std;
int main()
{
    int find,i,arr[100],n,l,h,j;
    cout<<"Enter no of array element: ";
    cin>>n;

    cout<<"\nEnter array elements: -";
    for(int a=0;a<n;a++)
    {
        cin>>arr[a];
    }

    cout<<"\nEnter the element which you want to find: ";
    cin>>find;
    l=0;
    h=n-1;

    for(int a=0;;a++)
    {

        if(find==arr[j])
        {
            cout<<"\nyour desired no is at "<<j<<"th position.";
            break;
        }
        else if(find>arr[j])
        {
            j=(j+h)/2;
        }
        else if(find<arr[j])
        {
            j=(j+l)/2;
        }
    }

}
