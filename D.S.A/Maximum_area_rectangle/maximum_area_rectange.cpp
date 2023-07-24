#include<iostream>
using namespace std;
void area();
int main()
{
    area();
}
void area()
{
    int n,i,j,max;
    cout<<"Enter the total no of sticks: ";
    cin>>n;
    int arr[n];
    int count[n];
    int temp[n];

    for(i=0;i<n;i++)
    {
        count[i]=0;
    }

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count[i]+=count[i];
        }
    }

    for(i=0;i<n;i++)
    {
        j=0;
        if(count[i]>1)
        {
            temp[0]=arr[i];
            j=j+1;
        }
    }

    max=temp[0]*temp[1];
    for(i=0;i<sizeof(temp)/4;i++)
    {
        for(j=i+1;j<sizeof(temp)/4;j++)
        {
            if((temp[i]*temp[j])>max)
            {
                max=temp[i]*temp[j];
            }
        }
    }
    cout<<"Maximum area of the rectange is : "<<max;
}
