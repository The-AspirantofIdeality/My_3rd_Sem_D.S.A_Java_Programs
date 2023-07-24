#include<iostream>
using namespace std;

class Media {
protected:
    string title;
    float price;
public:
    Media(string t, float p): title(t), price(p) {}
    virtual void display() {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
    }
};

class Book: public Media {
private:
    int page_count;
public:
    Book(string t, float p, int pc): Media(t, p), page_count(pc) {}
    void display() {
        cout << "Book Details:" << endl;
        Media::display();
        cout << "Page Count: " << page_count << endl;
    }
};

class Tape: public Media {
private:
    float playing_time;
public:
    Tape(string t, float p, float pt): Media(t, p), playing_time(pt) {}
    void display() {
        cout << "Tape Details:" << endl;
        Media::display();
        cout << "Playing Time: " << playing_time << " minutes" << endl;
    }
};

int main() {
    string title;
    float price, playing_time;
    int page_count;

    cout << "Enter book title: ";
    getline(cin, title);
    cout << "Enter book price: $";
    cin >> price;
    cout << "Enter page count: ";
    cin >> page_count;
    Book book(title, price, page_count);

    cin.ignore(); // to clear input buffer

    cout << "Enter tape title: ";
    getline(cin, title);
    cout << "Enter tape price: $";
    cin >> price;
    cout << "Enter playing time (in minutes): ";
    cin >> playing_time;
    Tape tape(title, price, playing_time);

    cout << endl << "Displaying book details:" << endl;
    book.display();

    cout << endl << "Displaying tape details:" << endl;
    tape.display();

    return 0;
}
