#include <iostream>

using namespace std;

int main()
{
    int n,i,find,a;
    int array[100];
    cout<<"\nEnter no of elements: -"<<endl;
    cin>>n;
    cout<<"Enter wanted element: -";
    cin>>find;
    cout<<"Enter array elements: -"<<endl;
    for(i=0; i<n; i++) {
        cin>>array[i];
    }
    cout<<"element index is: "<<endl;
    for(i=0; i<n; i++) {
        if(array[i]==find) {
            a=i;
        }
    }
    cout<<a;
    return 0;
}
