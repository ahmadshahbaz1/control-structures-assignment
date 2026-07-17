// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P01 - Traffic Light Signal Action
// Structure  : if-else (explicit nested if/else ladder)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int signal;
    cout << "Enter traffic light code (1=Red, 2=Yellow, 3=Green): ";
    cin >> signal;

    // Every decision here is a genuine if-else pair; each 'else'
    // opens the next if-else pair, one level deeper than the last.
    if (signal == 1) {
        cout << "Category: RED" << endl;
        cout << "Detail  : STOP the vehicle completely." << endl;
    } else {
        if (signal == 2) {
            cout << "Category: YELLOW" << endl;
            cout << "Detail  : Slow down and prepare to stop." << endl;
        } else {
            if (signal == 3) {
                cout << "Category: GREEN" << endl;
                cout << "Detail  : Go, the way is clear." << endl;
            } else {
                cout << "Category: Invalid code" << endl;
                cout << "Detail  : Please enter a code in the valid range." << endl;
            }
        }
    }

    return 0;
}
