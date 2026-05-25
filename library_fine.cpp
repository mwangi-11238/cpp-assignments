#include <iostream>
using namespace std;

int main() {
    int bookID, dueDate, returnDate;
    int daysOverdue;
    double fineRate = 0, fineAmount = 0;

    cout << "Enter Book ID: ";
    cin >> bookID;

    cout << "Enter Due Date (e.g., day number): ";
    cin >> dueDate;

    cout << "Enter Return Date: ";
    cin >> returnDate;

    daysOverdue = returnDate - dueDate;

    if (daysOverdue <= 0) {
        cout << "\nBook returned on time. No fine." << endl;
    } else {
        // if...else to determine fine rate
        if (daysOverdue <= 7) {
            fineRate = 20;
        } else if (daysOverdue <= 14) {
            fineRate = 50;
        } else {
            fineRate = 100;
        }

        fineAmount = fineRate * daysOverdue;

        cout << "\n--- Library Fine Report ---" << endl;
        cout << "Book ID      : " << bookID << endl;
        cout << "Due Date     : " << dueDate << endl;
        cout << "Return Date  : " << returnDate << endl;
        cout << "Days Overdue : " << daysOverdue << endl;
        cout << "Fine Rate    : Ksh " << fineRate << " per day" << endl;
        cout << "Fine Amount  : Ksh " << fineAmount << endl;
    }

    return 0;
}
