#include <iostream>
using namespace std;

// Function Overloading
double area(double r) { // Circle
    return 3.14159 * r * r;
}

int area(int l, int b) { // Rectangle
    return l * b;
}

double area(double base, double height, bool isTriangle) { // Triangle
    return 0.5 * base * height;
}

int main() {
    cout << "Area of Circle (r=5): " << area(5.0) << endl;
    cout << "Area of Rectangle (l=4, b=6): " << area(4, 6) << endl;
    cout << "Area of Triangle (base=8, height=5): " << area(8.0, 5.0, true) << endl;
    return 0;
}
