#include <iostream>
using namespace std;

void swapNumbers(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 5;
    int b = 10;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swapNumbers(&a, &b);

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
