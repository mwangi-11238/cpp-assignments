#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string employeeName;
    int employeeID;
    double basicSalary;

public:
    void setEmployeeDetails() {
        cout << "Enter employee name: ";
        getline(cin, employeeName);
        cout << "Enter employee ID: ";
        cin >> employeeID;
        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }

    double calculateSalary() {
        return basicSalary + (0.10 * basicSalary);
    }

    void displayEmployeeDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Name         : " << employeeName << endl;
        cout << "ID           : " << employeeID << endl;
        cout << "Basic Salary : Ksh " << basicSalary << endl;
        cout << "Net Salary   : Ksh " << calculateSalary() << endl;
    }
};

int main() {
    Employee e;
    e.setEmployeeDetails();
    e.displayEmployeeDetails();
    return 0;
}
