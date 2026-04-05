#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> numbers;

    // Insert values
    numbers.insert(10);
    numbers.insert(5);
    numbers.insert(20);
    numbers.insert(10); // duplicate, won't be added

    // Display values
    cout << "Elements in the set:" << endl;
    for(auto &num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Search for an element
    int key = 5;
    if(numbers.find(key) != numbers.end()) {
        cout << key << " is present in the set." << endl;
    } else {
        cout << key << " is not present in the set." << endl;
    }

    return 0;
}
