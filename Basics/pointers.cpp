#include <iostream>
using namespace std;

int main()
{
    int a = 10;        // normal variable
    int *ptr = &a;     // pointer storing address of a

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;

    cout << "Pointer value (address stored): " << ptr << endl;
    cout << "Value using pointer: " << *ptr << endl;

    return 0;
}
