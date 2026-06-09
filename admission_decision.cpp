// Week 2 Task 2: Admission Decision (Nested if)
#include <iostream>
#include <string>
using namespace std;
int main() {
    string studentName, decision;
    int age;
    double examScore;
    cout << "Enter student name: "; getline(cin, studentName);
    cout << "Enter student age: "; cin >> age;
    cout << "Enter exam score: "; cin >> examScore;
    if (age >= 18) {
        if (examScore >= 50) decision = "Admitted";
        else decision = "Not Admitted: Low Score";
    } else {
        decision = "Not Admitted: Underage";
    }
    cout << "\n========================================" << endl;
    cout << "         COLLEGE ADMISSION RESULT       " << endl;
    cout << "========================================" << endl;
    cout << "Student Name  : " << studentName << endl;
    cout << "Age           : " << age << endl;
    cout << "Exam Score    : " << examScore << endl;
    cout << "----------------------------------------" << endl;
    cout << "Decision      : " << decision << endl;
    cout << "========================================" << endl;
    return 0;
}
