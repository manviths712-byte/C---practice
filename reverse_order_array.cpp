#include <iostream>
using namespace std;

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(nums) / sizeof(nums[0]);

    for (int i = n - 1; i >= 0; i--) {
        cout << nums[i] << " ";
    }

    return 0;
}