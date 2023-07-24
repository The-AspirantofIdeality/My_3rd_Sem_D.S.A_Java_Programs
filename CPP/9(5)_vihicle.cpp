#include<iostream>
#include<string>
using namespace std;
class Vehicle
{
protected:
    float average;
public:
    virtual void getdata()=0;
    virtual void putdata()=0;
};
class Car:public Vehicle
{
    string fuel_type;
    int no_wheels;
public:
    void getdata()
    {
        cout<<"\nEnter fuel type of your vehicle: ";
        cin>>fuel_type;
        cout<<"\nEnter total no of wheels required for your vehicle: ";
        cin>>no_wheels;
        cout<<"\nEnter average of your vehicle: ";
        cin>>average;
    }
    void putdata()
    {
        cout<<"\nfuel type: "<<fuel_type;
        cout<<"\nno of required wheels: "<<no_wheels;
        cout<<"\naverage of your vehicle: "<<average;
    }
}car[2];
class Truck:public Vehicle
{
    string fuel_type;
    int no_wheels;
public:
    void getdata()
    {
        cout<<"\nEnter fuel type of your vehicle: ";
        cin>>fuel_type;
        cout<<"\nEnter total no of wheels required for your vehicle: ";
        cin>>no_wheels;
        cout<<"\nEnter average of your vehicle: ";
        cin>>average;
    }
    void putdata()
    {
        cout<<"\nfuel type: "<<fuel_type;
        cout<<"\nno of required wheels: "<<no_wheels;
        cout<<"\naverage of your vehicle: "<<average;
    }
}truck;
main()
{
    car[0].getdata();
    car[0].putdata();
    cout<<"\n=======================================================================";
    car[1].getdata();
    car[1].putdata();
    cout<<"\n========================================================================";
    truck.getdata();
    truck.putdata();
    return 0;
}
