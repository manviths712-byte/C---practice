#include <iostream>
using namespace std;

int main() {
    int n, i = 2, flag = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (i <= n / 2) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0 && n > 1)
        cout << n << " is a Prime number";
    else
        cout << n << " is not a Prime number";

    return 0;
}
