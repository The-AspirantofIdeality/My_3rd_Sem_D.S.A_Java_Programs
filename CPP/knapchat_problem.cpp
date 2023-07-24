#include<iostream>
using namespace std;
void knapset(void );
int main()
{
    knapset();
}
void knapset(void )
{
    int obj[1000],n,i,temp=0,k,c,j,count;
    cout<<"\nEnter total no of onject which you want to enter: -";
    cin>>n;
    cout<<"\nEnter object's weight: -";
    for(i=0;i<n;i++)
    {
        cin>>obj[i];
    }
    cout<<"\nEnter makimum capacity in terms of weight: -";
    cin>>c;
    cout<<"\nEnter minimum cappcity in terms of weight: -";
    cin>>k;
    i=0;
    for(i=0;i<n;i++)
    {
        //j=0;
        //if(obj[i]>=k && obj[i]<=c)
        //{
        //    counter[i][j]=1;
        //}
        for(j=0;j<n;j++)
        {
            if(obj[j]<obj[j+1])
            {

            }
        }
    }



}

