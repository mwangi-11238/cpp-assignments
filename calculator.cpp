// Week 2 Task 3: Simple Calculator (switch statement)
#include <iostream>
using namespace std;
int main() {
    double number1, number2, result;
    char operatorChar;
    bool valid = true;
    cout << "Enter first number: "; cin >> number1;
    cout << "Enter operator (+, -, *, /): "; cin >> operatorChar;
    cout << "Enter second number: "; cin >> number2;
    switch (operatorChar) {
        case '+': result = number1 + number2; break;
        case '-': result = number1 - number2; break;
        case '*': result = number1 * number2; break;
        case '/':
            if (number2 == 0) { cout << "Error: Division by zero." << endl; valid = false; }
            else result = number1 / number2;
            break;
        default: cout << "Error: Invalid operator." << endl; valid = false;
    }
    if (valid) {
        cout << "\n========================================" << endl;
        cout << "              CALCULATOR RESULT         " << endl;
        cout << "========================================" << endl;
        cout << number1 << " " << operatorChar << " " << number2 << " = " << result << endl;
        cout << "========================================" << endl;
    }
    return 0;
}
