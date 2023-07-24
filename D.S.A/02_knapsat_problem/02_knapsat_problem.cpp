#include<iostream>
using namespace std;
void knapset();
int main()
{
    knapset();
}
void knapset()
{
    int obj[1000],n,i,temp=0,k,c,j,count[1000],counter=0;
    cout<<"\nEnter total no of onject which you want to enter: -";
    cin>>n;
    cout<<"\nEnter object's weight: -";
    for(i=0;i<n;i++)
    {
        cin>>obj[i];
    }
    cout<<"\nEnter maximum capacity in terms of weight: -";
    cin>>c;
    cout<<"\nEnter minimum cappcity in terms of weight: -";
    cin>>k;
    for(i=0;i<n;i++)
    {
        if(obj[i]<=c && obj[i]>=k)
        {
            count[i]=counter+1;
        }
        else{
            count[i]=0;
        }
        for(j=1;j<n;j++)
        {
            obj[i]=obj[i]+obj[j];
            if(obj[i]<=c && obj[i]>=k)
            {
                count[i]=count[i]+1;
            }
        }
    }
    for(i=0;i<(sizeof(count)/4);i++)
    {
        for(j=1;j<(sizeof(count)/4);j++)
        {
            if(count[i]<count[j])
            {
                count[i]=count[i]+count[j];
                count[j]=count[i]-count[j];
                count[i]=count[i]-count[j];
            }
        }
    }
    cout<<"\n"<<count[0];
}
