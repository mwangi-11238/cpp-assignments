// Week 4 Task 3: Password Verification System (do-while loop)
#include <iostream>
#include <string>
using namespace std;
int main() {
    const string CORRECT_USERNAME = "admin";
    const string CORRECT_PASSWORD = "pass1234";
    string enteredUsername, enteredPassword;
    cout << "========================================" << endl;
    cout << "          SECURE LOGIN SYSTEM           " << endl;
    cout << "========================================" << endl;
    do {
        cout << "\nEnter username: "; cin >> enteredUsername;
        cout << "Enter password: "; cin >> enteredPassword;
        if (enteredUsername == CORRECT_USERNAME && enteredPassword == CORRECT_PASSWORD) {
            cout << "\nAccess Granted! Welcome, " << enteredUsername << "!" << endl;
        } else {
            cout << "\nIncorrect credentials, try again." << endl;
        }
    } while (enteredUsername != CORRECT_USERNAME || enteredPassword != CORRECT_PASSWORD);
    return 0;
}
