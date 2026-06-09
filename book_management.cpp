// Week 6 Task 1: Library Book Management System
#include <iostream>
#include <string>
using namespace std;
class Book {
    string bookTitle, author;
    int copiesAvailable;
public:
    void inputDetails() {
        cout << "Enter book title: "; getline(cin, bookTitle);
        cout << "Enter author name: "; getline(cin, author);
        cout << "Enter number of copies available: "; cin >> copiesAvailable; cin.ignore();
    }
    void borrowBook() {
        if (copiesAvailable > 0) { copiesAvailable--; cout << "\nBook borrowed successfully!" << endl; }
        else cout << "\nNo copies available." << endl;
    }
    void displayDetails() {
        cout << "\n========================================" << endl;
        cout << "          LIBRARY BOOK DETAILS          " << endl;
        cout << "========================================" << endl;
        cout << "Book Title       : " << bookTitle << endl;
        cout << "Author           : " << author << endl;
        cout << "Copies Available : " << copiesAvailable << endl;
        cout << "========================================" << endl;
    }
};
int main() {
    Book book1;
    cout << "=== Enter Book Details ===" << endl;
    book1.inputDetails();
    cout << "\n--- Before Borrowing ---"; book1.displayDetails();
    book1.borrowBook();
    cout << "\n--- After Borrowing ---"; book1.displayDetails();
    return 0;
}
