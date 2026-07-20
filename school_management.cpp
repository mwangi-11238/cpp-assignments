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
