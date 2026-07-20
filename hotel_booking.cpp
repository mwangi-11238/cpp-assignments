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
