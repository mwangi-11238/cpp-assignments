// Week 4 Task 1: Employee Bonus System (for loop)
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    string employeeName;
    double basicSalary, bonus, totalSalary;
    cout << "========================================" << endl;
    cout << "       EMPLOYEE BONUS SYSTEM            " << endl;
    cout << "========================================" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "\n--- Employee " << i << " ---" << endl;
        cout << "Enter employee name: "; cin.ignore(); getline(cin, employeeName);
        cout << "Enter basic salary (KES): "; cin >> basicSalary;
        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;
        cout << fixed << setprecision(2);
        cout << "Basic Salary : KES " << basicSalary << endl;
        cout << "Bonus (5%)   : KES " << bonus << endl;
        cout << "Total Salary : KES " << totalSalary << endl;
        cout << "----------------------------------------" << endl;
    }
    return 0;
}
