#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 90, 50};
    int n = 5;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    float average = (float) sum / n;

    cout << "Average = " << average << endl;

    return 0;
}
