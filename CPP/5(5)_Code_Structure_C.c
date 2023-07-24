#include <stdio.h>

struct Rectangle
{
    float width;
    float height;
};

void get_values(struct Rectangle *r)
{
    printf("Enter the width of the rectangle: ");  //Taking the input of Width
    scanf("%f", &(r->width));
    printf("Enter the height of the rectangle: "); //Taking the input of height
    scanf("%f", &(r->height));
}

float area(struct Rectangle r)
{
    return r.width * r.height;  //calculating area of rectangle
}

int main()
{
    struct Rectangle rect;
    get_values(&rect);
    printf("The area of the rectangle is: %f", area(rect)); //printing the value of rectangle
    return 0;
}

