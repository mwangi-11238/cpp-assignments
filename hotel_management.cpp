// Week 5: Hotel Management System Using Arrays (1D, 2D, 3D)
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    // 1D - Weekly Revenue
    const int DAYS = 7;
    double revenue[DAYS], totalRevenue = 0;
    string dayNames[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    cout << "=== WEEKLY REVENUE TRACKER ===" << endl;
    for (int i = 0; i < DAYS; i++) {
        cout << "Enter revenue for " << dayNames[i] << " (KES): "; cin >> revenue[i];
        totalRevenue += revenue[i];
    }
    cout << fixed << setprecision(2);
    cout << "\nTotal Weekly Revenue  : KES " << totalRevenue << endl;
    cout << "Average Daily Revenue : KES " << totalRevenue / DAYS << endl;
    // 2D - Single Branch Occupancy
    const int FLOORS = 5, ROOMS = 10;
    int occupancy[FLOORS][ROOMS];
    cout << "\n=== ROOM OCCUPANCY - SINGLE BRANCH ===" << endl;
    for (int f = 0; f < FLOORS; f++) {
        int occ = 0, vac = 0;
        for (int r = 0; r < ROOMS; r++) { occupancy[f][r] = rand() % 2; if (occupancy[f][r]) occ++; else vac++; }
        cout << "Floor " << (f+1) << " -> Occupied: " << occ << "  Vacant: " << vac << endl;
    }
    // 3D - All Branches
    const int BRANCHES = 3;
    int chain[BRANCHES][FLOORS][ROOMS];
    int totalOccupied = 0;
    cout << "\n=== ROOM OCCUPANCY - ALL 3 BRANCHES ===" << endl;
    for (int b = 0; b < BRANCHES; b++) {
        int bOcc = 0;
        for (int f = 0; f < FLOORS; f++)
            for (int r = 0; r < ROOMS; r++) { chain[b][f][r] = rand() % 2; if (chain[b][f][r]) { bOcc++; totalOccupied++; } }
        cout << "Branch " << (b+1) << " -> Occupied Rooms: " << bOcc << endl;
    }
    cout << "Total Occupied (All Branches): " << totalOccupied << endl;
    return 0;
}
