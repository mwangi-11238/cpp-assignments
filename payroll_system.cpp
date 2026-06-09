// Week 3 Task 1: Payroll System Using Functions
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
string employeeName;
double basicSalary, overtimePay, netSalary;
int overtimeHours;
const double RATE_PER_HOUR = 200.0;
void getEmployeeDetails() {
    cout << "Enter employee name: "; getline(cin, employeeName);
    cout << "Enter basic salary (KES): "; cin >> basicSalary;
    cout << "Enter overtime hours: "; cin >> overtimeHours;
}
void calculateOvertimePay() { overtimePay = overtimeHours * RATE_PER_HOUR; }
void calculateNetSalary() { netSalary = basicSalary + overtimePay; }
void displayPayslip() {
    cout << "\n========================================" << endl;
    cout << "              EMPLOYEE PAYSLIP          " << endl;
    cout << "========================================" << endl;
    cout << fixed << setprecision(2);
    cout << "Employee Name    : " << employeeName << endl;
    cout << "Basic Salary     : KES " << basicSalary << endl;
    cout << "Overtime Hours   : " << overtimeHours << " hrs" << endl;
    cout << "Rate Per Hour    : KES " << RATE_PER_HOUR << endl;
    cout << "Overtime Pay     : KES " << overtimePay << endl;
    cout << "----------------------------------------" << endl;
    cout << "Net Salary       : KES " << netSalary << endl;
    cout << "========================================" << endl;
}
int main() {
    getEmployeeDetails();
    calculateOvertimePay();
    calculateNetSalary();
    displayPayslip();
    return 0;
}
