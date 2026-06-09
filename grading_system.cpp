// Week 2 Task 1: Grading System (if-else ladder)
#include <iostream>
#include <string>
using namespace std;
int main() {
    string studentName;
    int examMarks;
    char grade;
    cout << "Enter student name: "; getline(cin, studentName);
    cout << "Enter exam marks (0-100): "; cin >> examMarks;
    if (examMarks >= 70) grade = 'A';
    else if (examMarks >= 60) grade = 'B';
    else if (examMarks >= 50) grade = 'C';
    else if (examMarks >= 40) grade = 'D';
    else grade = 'E';
    cout << "\n========================================" << endl;
    cout << "           STUDENT GRADE REPORT         " << endl;
    cout << "========================================" << endl;
    cout << "Student Name : " << studentName << endl;
    cout << "Exam Marks   : " << examMarks << endl;
    cout << "Grade        : " << grade << endl;
    cout << "========================================" << endl;
    return 0;
}
