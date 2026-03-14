#include <iostream>
using namespace std;

// Function to calculate electricity bill
double calculateBill(int units) {
    double billAmount = 0;

    if (units <= 100)
        billAmount = units * 1.50;           // ₹1.50 per unit
    else if (units <= 200)
        billAmount = (100 * 1.50) + (units - 100) * 2.00; // next 100 → ₹2.00
    else
        billAmount = (100 * 1.50) + (100 * 2.00) + (units - 200) * 3.00; // above 200 → ₹3.00

    return billAmount;
}

int main() {
    int units;
    cout << "Enter total units consumed: ";
    cin >> units;

    double total = calculateBill(units);

    cout << "Electricity Bill Amount: ₹" << total << endl;
    return 0;
}
