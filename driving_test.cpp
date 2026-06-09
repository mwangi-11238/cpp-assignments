// Week 1 Task 2: Driving Test Result Evaluation System
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    string studentName;
    double theoryMarks, practicalMarks, averageScore;
    cout << "Enter student name: "; getline(cin, studentName);
    cout << "Enter theory test marks: "; cin >> theoryMarks;
    cout << "Enter practical test marks: "; cin >> practicalMarks;
    averageScore = (theoryMarks + practicalMarks) / 2;
    string result = (averageScore >= 50) ? "PASS" : "FAIL";
    cout << "\n========================================" << endl;
    cout << "       ROCKY DRIVING SCHOOL RESULT      " << endl;
    cout << "========================================" << endl;
    cout << fixed << setprecision(2);
    cout << "Student Name     : " << studentName << endl;
    cout << "Theory Marks     : " << theoryMarks << endl;
    cout << "Practical Marks  : " << practicalMarks << endl;
    cout << "Average Score    : " << averageScore << endl;
    cout << "----------------------------------------" << endl;
    cout << "Result           : " << result << endl;
    cout << "========================================" << endl;
    return 0;
}
