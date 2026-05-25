#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int marks;
    double attendance;
    string scholarship;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter exam marks (0-100): ";
    cin >> marks;

    cout << "Enter attendance percentage (0-100): ";
    cin >> attendance;

    // Nested if statements
    if (marks >= 70) {
        if (attendance >= 80) {
            scholarship = "Full Scholarship";
        } else {
            scholarship = "Partial Scholarship";
        }
    } else if (marks >= 50) {
        if (attendance >= 85) {
            scholarship = "Partial Scholarship";
        } else {
            scholarship = "No Scholarship";
        }
    } else {
        scholarship = "No Scholarship";
    }

    cout << "\n--- Result ---" << endl;
    cout << "Student: " << studentName << endl;
    cout << "Scholarship Status: " << scholarship << endl;

    return 0;
}
