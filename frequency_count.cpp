#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 1, 2};
    int n = 6;

    for(int i = 0; i < n; i++) {
        int count = 1;

        // Skip already counted elements
        if(arr[i] == -1)
            continue;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -1;   // mark as counted
            }
        }

        cout << arr[i] << " occurs " << count << " times" << endl;
    }

    return 0;
}