#include <iostream>
using namespace std;

// Function Declaration
int findMax(int x, int y);

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Function Call
    int result = findMax(num1, num2);

    cout << "The greater number is: " << result << endl;

    return 0;
}

// Function Definition
int findMax(int x, int y) {
    if (x > y)
        return x;
    else
        return y;
}
