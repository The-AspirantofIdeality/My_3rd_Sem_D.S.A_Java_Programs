#include <iostream>
using namespace std;
// First function to check if numerator is divisible by denominator
void divide(int num, int den) {
    if (den == 0) {
        cout << "Error: Cannot divide by zero" << endl;
        return;
    }
    if (num % den == 0) {
        cout << num << " is divisible by " << den << endl;
    }
    else {
        cout << num << " is not divisible by " << den << endl;
    }
}
// Second function to check if a number is prime
void divide(int num) {
    int i;
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            break;
        }
    }
    if (i == num) {
        cout << num << " is a prime number" << endl;
    }
    else {
        cout << num << " is not a prime number" << endl;
    }
}
// Third function to find the average of three float numbers
void divide(float a, float b, float c) {
    float avg = (a + b + c) / 3.0;
    cout << "The average of " << a << ", " << b << ", and " << c << " is " << avg << endl;
}
int main() {
    divide(10, 2);
    divide(10, 3);
    divide(7);
    divide(10);
    divide(2.5, 3.5, 4.5);
    divide(1.0, 2.0, 3.0);
}
