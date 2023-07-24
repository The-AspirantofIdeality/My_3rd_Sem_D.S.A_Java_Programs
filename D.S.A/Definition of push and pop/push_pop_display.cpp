#include<iostream>
using namespace std;
int top=-1;
int stack[5];
void push(int x);
int pop();
int main()
{
    int x,num;
    do{
    cout<<"\nEnter the number of method you want to perform: ";
    cin>>x;
    switch(x)
    {
        case 0:
            cout<<"\nEnter number which you want to push: ";
            cin>>num;
            push(num);
        case 1:
            cout<<"\npoped element: ";
            pop();
        case 2:
            cout<<"calling display function: ";
            display();
        case 3:
            break;
    }
    }while(1)
}
void push(int x)
{
    if(top==4)
    {
        cout<<"\nData Overflow";
    }
    else{
        top=top+1;
        stack[top]=x;
    }

}
int pop()
{
    if(top==0)
    {
        cout<<"\nData Underflow";
    }
    else{
        top=top-1;
        return stack[top+1];
    }
}
void display()
{
    int i=top;
    for(i=top;i>-1;i++)
    {
        cout<<"\n"<<stack[top];
    }
}
