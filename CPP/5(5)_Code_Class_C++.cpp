#include <iostream>

class Rectangle
{
    float width;
    float height;

public:
    void get_values()
    {
        std::cout << "Enter the width of the rectangle: ";  //taking the value of width
        std::cin >> width;
        std::cout << "Enter the height of the rectangle: ";  //taking the value of height
        std::cin >> height;
    }

    float area()
    {
        return width * height;  //calculating area
    }
};

int main()
{
    Rectangle rect;
    rect.get_values();
    std::cout << "The area of the rectangle is: " << rect.area();  //print the area of the rectangle
    return 0;
}

