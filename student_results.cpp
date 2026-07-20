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
