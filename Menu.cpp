#include<iostream>
using namespace std;

int main() {
    int choice;
    float num1, num2, result, radius, length, breadth;

    cout << "=============================\n";
    cout << "\tMENU OPTIONS\n";
    cout << "=============================\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Find Area of Circle\n";
    cout << "6. Find Area of Rectangle\n";
    cout << "7. Exit\n";
    cout << "=============================\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch(choice) {
        
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Result = " << result;
            break;
        
        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Result = " << result;
            break;
        
        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Result = " << result;
            break;
        
        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if(num2 != 0) {
                cout << "Result = " << num1 / num2;
            } else {
                cout << "Error! Division by Zero.";
            }
            break;  
            
        case 5:
            cout << "Enter the radius: ";
            cin >> radius;
            result = 3.14159 * radius * radius;
            cout << "Area of Circle = " << result;
            break;
            
        case 6:
            cout << "Enter Length and Breadth: ";
            cin >> length >> breadth;
            result = length * breadth;
            cout << "Area of Rectangle = " << result;
            break;
            
        case 7:
            cout << "Exiting the program... Goodbye!";
            break;
            
        default:
            cout << "Invalid choice! Please try again.";
    }

    return 0;
}
