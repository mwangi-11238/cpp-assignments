// Week 6 Task 2: Student Fee Management System
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Student {
    string studentName, admissionNumber;
    double feeBalance;
public:
    void inputStudent() {
        cout << "Enter student name: "; getline(cin, studentName);
        cout << "Enter admission number: "; getline(cin, admissionNumber);
        cout << "Enter fee balance (KES): "; cin >> feeBalance; cin.ignore();
    }
    void makePayment() {
        double amount;
        cout << "\nEnter payment amount (KES): "; cin >> amount;
        if (amount <= 0 || amount > feeBalance) cout << "Invalid payment amount." << endl;
        else { feeBalance -= amount; cout << fixed << setprecision(2) << "Payment of KES " << amount << " processed." << endl; }
    }
    void displayStatus() {
        cout << "\n========================================" << endl;
        cout << "        STUDENT FEE STATUS              " << endl;
        cout << "========================================" << endl;
        cout << fixed << setprecision(2);
        cout << "Student Name      : " << studentName << endl;
        cout << "Admission Number  : " << admissionNumber << endl;
        cout << "Remaining Balance : KES " << feeBalance << endl;
        cout << "========================================" << endl;
    }
};
int main() {
    Student s;
    cout << "=== Enter Student Details ===" << endl;
    s.inputStudent();
    cout << "\n--- Before Payment ---"; s.displayStatus();
    s.makePayment();
    cout << "\n--- After Payment ---"; s.displayStatus();
    return 0;
}
