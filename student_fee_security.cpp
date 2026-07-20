#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudentData() {
        cout << "Enter student name: ";
        getline(cin, studentName);
        cout << "Enter admission number: ";
        getline(cin, admissionNumber);
        cout << "Enter fee balance: Ksh ";
        cin >> feeBalance;
    }

    void makePayment() {
        double payment;
        cout << "Enter payment amount: Ksh ";
        cin >> payment;
        if (payment > feeBalance) {
            cout << "Payment exceeds balance!" << endl;
        } else {
            feeBalance -= payment;
            cout << "Payment of Ksh " << payment << " received." << endl;
        }
    }

    void displayStatus() {
        cout << "\n--- Student Fee Status ---" << endl;
        cout << "Name         : " << studentName << endl;
        cout << "Admission No : " << admissionNumber << endl;
        cout << "Fee Balance  : Ksh " << feeBalance << endl;
    }
};

int main() {
    Student s;
    s.inputStudentData();
    s.makePayment();
    s.displayStatus();
    return 0;
}
