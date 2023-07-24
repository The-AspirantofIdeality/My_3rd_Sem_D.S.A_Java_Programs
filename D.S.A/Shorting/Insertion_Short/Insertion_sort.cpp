#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element: "<<endl;
    for(k=0;k<n;k++)
    {
        cin>>arr[k];
    }

    for(j=1;j<n;j++)
    {
        i=j-1;
        int key=arr[j];
        while(i>-1 && arr[i]>key)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }

    for(k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<"\nProgram performer  "<<char(61)<<char(62)<<char(62)<<"  The A.I."<<endl;
    cout<<"Inspired by\t   "<<char(61)<<char(62)<<char(62)<<"  #define loveof(m,m)"<<endl;

}
