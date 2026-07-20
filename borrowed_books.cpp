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
