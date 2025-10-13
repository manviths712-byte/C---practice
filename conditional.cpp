#include<iostream>
using namespace std;

int main(){
    int x, y;
    
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    
    // Ternary operator with three possibilities
    cout << "The value x and y : "
         << ((x > y) ? "Greater" : ((x < y) ? "Less" : "Equal"))
         << endl;
    
    return 0;
}
