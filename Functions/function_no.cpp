#include <iostream>
using namespace std;

// Function Overloading - same name, different parameters
int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Sum of 2 integers: " << add(5, 10) << endl;
    cout << "Sum of 2 floats: " << add(4.5f, 3.2f) << endl;
    cout << "Sum of 3 integers: " << add(2, 4, 6) << endl;

    return 0;
}
