#!/bin/bash

# ─────────────────────────────────────────
# AUTO SETUP: Week 8-13 C++ Assignments
# Run: bash setup_and_push.sh
# ─────────────────────────────────────────

cd ~/cpp-assignments

# ── WEEK 8: bank_account.cpp ──
cat > bank_account.cpp << 'EOF'
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    string holderName;
    int accountNumber;
    double balance;

    BankAccount(string name, int accNo, double bal) {
        holderName = name;
        accountNumber = accNo;
        balance = bal;
        cout << "Account successfully created" << endl;
    }

    void displayAccount() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Holder Name   : " << holderName << endl;
        cout << "Account No    : " << accountNumber << endl;
        cout << "Balance       : Ksh " << balance << endl;
    }

    ~BankAccount() {
        cout << "\nAccount closed successfully" << endl;
    }
};

int main() {
    BankAccount acc("John Kamau", 100123, 15000.00);
    acc.displayAccount();
    return 0;
}
EOF

# ── WEEK 8: hotel_booking.cpp ──
cat > hotel_booking.cpp << 'EOF'
#include <iostream>
#include <string>
using namespace std;

class RoomBooking {
public:
    string guestName;
    int roomNumber;
    int daysBooked;

    RoomBooking(string name, int room, int days) {
        guestName = name;
        roomNumber = room;
        daysBooked = days;
        cout << "Room booking confirmed" << endl;
    }

    void displayBooking() {
        cout << "\n--- Booking Details ---" << endl;
        cout << "Guest Name  : " << guestName << endl;
        cout << "Room Number : " << roomNumber << endl;
        cout << "Days Booked : " << daysBooked << endl;
    }

    ~RoomBooking() {
        cout << "\nBooking ended, room released" << endl;
    }
};

int main() {
    RoomBooking booking("Alice Wanjiku", 204, 3);
    booking.displayBooking();
    return 0;
}
EOF

# ── WEEK 9: school_management.cpp ──
cat > school_management.cpp << 'EOF'
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    void displayPerson() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

class Student : public Person {
public:
    string admissionNumber;
    string studentClass;

    void displayStudent() {
        displayPerson();
        cout << "Admission No : " << admissionNumber << endl;
        cout << "Class        : " << studentClass << endl;
    }
};

int main() {
    Student s;
    cout << "Enter name: ";
    getline(cin, s.name);
    cout << "Enter age: ";
    cin >> s.age;
    cin.ignore();
    cout << "Enter admission number: ";
    getline(cin, s.admissionNumber);
    cout << "Enter class: ";
    getline(cin, s.studentClass);

    cout << "\n--- Student Details ---" << endl;
    s.displayStudent();
    return 0;
}
EOF

# ── WEEK 9: vehicle_system.cpp ──
cat > vehicle_system.cpp << 'EOF'
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string brand;
    int yearOfManufacture;

    void displayVehicle() {
        cout << "Brand               : " << brand << endl;
        cout << "Year of Manufacture : " << yearOfManufacture << endl;
    }
};

class Car : public Vehicle {
public:
    int numberOfDoors;
    double engineCapacity;

    void displayCar() {
        displayVehicle();
        cout << "Number of Doors : " << numberOfDoors << endl;
        cout << "Engine Capacity : " << engineCapacity << "L" << endl;
    }
};

int main() {
    Car car;
    cout << "Enter brand: ";
    getline(cin, car.brand);
    cout << "Enter year of manufacture: ";
    cin >> car.yearOfManufacture;
    cout << "Enter number of doors: ";
    cin >> car.numberOfDoors;
    cout << "Enter engine capacity (L): ";
    cin >> car.engineCapacity;

    cout << "\n--- Car Details ---" << endl;
    car.displayCar();
    return 0;
}
EOF

# ── WEEK 10: payment_system.cpp ──
cat > payment_system.cpp << 'EOF'
#include <iostream>
using namespace std;

class Payment {
public:
    void processPayment(int amount) {
        cout << "\n--- Cash Payment ---" << endl;
        cout << "Amount Paid : Ksh " << amount << endl;
    }

    void processPayment(int amount, double transactionFee) {
        double total = amount + transactionFee;
        cout << "\n--- Card Payment ---" << endl;
        cout << "Amount          : Ksh " << amount << endl;
        cout << "Transaction Fee : Ksh " << transactionFee << endl;
        cout << "Total Charged   : Ksh " << total << endl;
    }

    void processPayment(int amount, double fee, double discount) {
        double total = (amount + fee) - discount;
        cout << "\n--- Mobile Payment ---" << endl;
        cout << "Amount    : Ksh " << amount << endl;
        cout << "Fee       : Ksh " << fee << endl;
        cout << "Discount  : Ksh " << discount << endl;
        cout << "Total     : Ksh " << total << endl;
    }
};

int main() {
    Payment p;
    p.processPayment(500);
    p.processPayment(1000, 25.50);
    p.processPayment(2000, 30.00, 100.00);
    return 0;
}
EOF

# ── WEEK 10: shape_drawing.cpp ──
cat > shape_drawing.cpp << 'EOF'
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
};

int main() {
    Shape* ptr;

    Circle c;
    Rectangle r;
    Triangle t;

    ptr = &c; ptr->draw();
    ptr = &r; ptr->draw();
    ptr = &t; ptr->draw();

    return 0;
}
EOF

# ── WEEK 11: employee_protection.cpp ──
cat > employee_protection.cpp << 'EOF'
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
EOF

# ── WEEK 11: student_fee_security.cpp ──
cat > student_fee_security.cpp << 'EOF'
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
EOF

# ── WEEK 12: hospital_management.cpp ──
cat > hospital_management.cpp << 'EOF'
#include <iostream>
#include <string>
using namespace std;

class MedicalStaff {
protected:
    string staffName;
    int staffID;

public:
    virtual double calculateSalary() = 0;

    void displayDetails() {
        cout << "Staff Name : " << staffName << endl;
        cout << "Staff ID   : " << staffID << endl;
    }
};

class Doctor : public MedicalStaff {
private:
    double basicSalary;
    double allowance;

public:
    Doctor(string name, int id, double salary, double allow) {
        staffName = name; staffID = id;
        basicSalary = salary; allowance = allow;
    }

    double calculateSalary() override {
        return basicSalary + allowance;
    }
};

class Nurse : public MedicalStaff {
private:
    double basicSalary;
    double overtimePay;

public:
    Nurse(string name, int id, double salary, double overtime) {
        staffName = name; staffID = id;
        basicSalary = salary; overtimePay = overtime;
    }

    double calculateSalary() override {
        return basicSalary + overtimePay;
    }
};

int main() {
    MedicalStaff* ptr;

    Doctor doc("Dr. Kamau", 101, 80000, 20000);
    Nurse nurse("Nurse Achieng", 202, 40000, 8000);

    ptr = &doc;
    ptr->displayDetails();
    cout << "Net Salary : Ksh " << ptr->calculateSalary() << "\n" << endl;

    ptr = &nurse;
    ptr->displayDetails();
    cout << "Net Salary : Ksh " << ptr->calculateSalary() << endl;

    return 0;
}
EOF

# ── WEEK 12: shape_area.cpp ──
cat > shape_area.cpp << 'EOF'
#include <iostream>
#define PI 3.14159
using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double calculateArea() override {
        return PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double calculateArea() override {
        return length * width;
    }
};

int main() {
    Shape* ptr;

    Circle c(7.0);
    Rectangle r(5.0, 3.0);

    ptr = &c;
    cout << "Circle Area    : " << ptr->calculateArea() << endl;

    ptr = &r;
    cout << "Rectangle Area : " << ptr->calculateArea() << endl;

    return 0;
}
EOF

# ── WEEK 13: borrowed_books.cpp ──
cat > borrowed_books.cpp << 'EOF'
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string title;
    cout << "Enter book title to record: ";
    getline(cin, title);

    ofstream file("borrowed_books.txt", ios::app);
    if (file.is_open()) {
        file << title << endl;
        file.close();
        cout << "Book title successfully stored." << endl;
    } else {
        cout << "Error opening file." << endl;
    }
    return 0;
}
EOF

# ── WEEK 13: student_results.cpp ──
cat > student_results.cpp << 'EOF'
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    char name[50];
    char regNumber[20];
    int totalMarks;
};

int main() {
    Student s;
    ifstream file("results.dat", ios::binary);

    if (!file.is_open()) {
        cout << "Could not open results.dat" << endl;
        return 1;
    }

    cout << "\n--- Student Results ---" << endl;
    while (file.read((char*)&s, sizeof(s))) {
        cout << "Name  : " << s.name << endl;
        cout << "Marks : " << s.totalMarks << "\n" << endl;
    }
    file.close();
    return 0;
}
EOF

# ── WEEK 13: sales_transactions.cpp ──
cat > sales_transactions.cpp << 'EOF'
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("sales.txt");
    double amount, total = 0;

    if (!file.is_open()) {
        cout << "Could not open sales.txt" << endl;
        return 1;
    }

    while (file >> amount) {
        total += amount;
    }

    file.close();
    cout << "Total Sales for the Day: Ksh " << total << endl;
    return 0;
}
EOF

# ── GIT: Add, commit, push ──
git add .
git commit -m "Add Week 8-13 OOP assignments"
git push

echo ""
echo "✅ All files created and pushed to GitHub successfully!"
