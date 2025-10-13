#include<iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter the marks (0-100): ";
    cin >> marks;

    // Nested ternary for grade
    string grade = (marks >= 90) ? "Grade A" :
                   (marks >= 75) ? "Grade B" :
                   (marks >= 50) ? "Grade C" : "Fail";

    cout << "Your grade is: " << grade << endl;

    return 0;
}
