#include <iostream>
using namespace std;

int main() {
    int n, temp, digit, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;

    while (n != 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n = n / 10;
    }

    if (sum == temp)
        cout << temp << " is an Armstrong number";
    else
        cout << temp << " is not an Armstrong number";

    return 0;
}
