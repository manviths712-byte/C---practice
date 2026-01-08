#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);   // auto size calculation
    int key;

    cout << "Enter the key to search: ";
    cin >> key;

    int index = -1;   // -1 indicates key not found

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;     // stop searching after first match
        }
    }

    if (index != -1) {
        cout << "Key found at index: " << index << endl;
    } else {
        cout << "Key not found in the array." << endl;
    }

    return 0;
}
