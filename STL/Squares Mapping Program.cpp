#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> squares;

    // Insert values
    for(int i = 1; i <= 10; i++) {
        squares[i] = i * i;
    }

    // Display values
    cout << "Number : Square" << endl;
    for(auto &entry : squares) {
        cout << entry.first << " : " << entry.second << endl;
    }

    return 0;
}
