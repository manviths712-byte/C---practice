#include<iostream>
using namespace std;

// Function Overloading Example

// 1. Function to add two integers
int sum(int a, int b) {
    return a + b;
}

// 2. Function to add three floating numbers
float sum(float x, float y, float z) {
    return x + y + z;
}

int main() {
    int a, b;
    float p, q, r;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Enter three floating numbers: ";
    cin >> p >> q >> r;

    cout << "Sum of integers = " << sum(a, b) << endl;
    cout << "Sum of floats = " << sum(p, q, r) << endl;

    return 0;
}