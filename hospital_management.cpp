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
