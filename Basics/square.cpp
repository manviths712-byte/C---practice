#include <iostream>
using namespace std;

// Function Declaration
int square(int n) {
    return n * n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Square of " << num << " = " << square(num) << endl;

    return 0;
}
