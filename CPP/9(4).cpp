#include<iostream>
using namespace std;
class Media
{
    string title;
    float price;
public:
    Media(string a,float b)
    {
        title=a;
        price=b;
    }
    virtual void display()
    {
        cout<<"\ntitle of the book is: "<<title;
        cout<<"\nprice of the book is: "<<price;
    }
};
class Book:public Media
{
    int page_count;
public:
    Book(string a,float b,int c):Media(a,b)
    {
        page_count=c;
    }
    void display()
    {
        Media::display();
        cout<<"\npage count is: "<<page_count;
    }
};
class Tape:public Media
{
    float playing_time;
public:
    Tape(string a,float b,float c):Media(a,b)
    {
        playing_time=c;
    }
    void display()
    {
        Media::display();
        cout<<"\nplaying time in minutes is: "<<playing_time;
    }
};
main()
{
    string name;
    float price,playing_time;
    int page_count;

    cout<<"\nEnter the name of the book: ";
    getline(cin,name);
    cout<<"\nEnter the price of the book: ";
    cin>>price;

    cout<<"\nEnter total number of pages of the book: ";
    cin>>page_count;
    Book book(name,price,page_count);

    cout<<"\nEnter playing time: ";
    cin>>playing_time;
    Tape tape(name,price,playing_time);

    cout<<"\nDisplaying via book object:-";
    book.display();
    cout<<"\nDisplaying via tape object:-";
    tape.display();

    return 0;
}
