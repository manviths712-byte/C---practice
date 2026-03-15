#include <iostream>
using namespace std;

// Function to calculate average
float calculateAverage(int marks[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += marks[i];
    }
    return (float)sum / n;
}

// Function to calculate grade
char calculateGrade(float avg) {
    if(avg >= 90)
        return 'A';
    else if(avg >= 75)
        return 'B';
    else if(avg >= 60)
        return 'C';
    else if(avg >= 40)
        return 'D';
    else
        return 'F';
}

int main() {
    int n;
    string name;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter number of subjects: ";
    cin >> n;

    int marks[n];

    cout << "Enter marks:\n";
    for(int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    float average = calculateAverage(marks, n);
    char grade = calculateGrade(average);

    cout << "\n----- Student Report -----\n";
    cout << "Name: " << name << endl;
    cout << "Average Marks: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
