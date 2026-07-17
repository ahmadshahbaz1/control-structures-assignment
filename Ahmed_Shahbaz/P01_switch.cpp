// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P01 - Traffic Light Signal Action
// Structure  : switch (coded-choice input)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int signal;
    cout << "Enter traffic light code (1=Red, 2=Yellow, 3=Green): ";
    cin >> signal;

    switch (signal) {
        case 1:
            cout << "Category: RED" << endl;
            cout << "Detail  : STOP the vehicle completely." << endl;
            break;
        case 2:
            cout << "Category: YELLOW" << endl;
            cout << "Detail  : Slow down and prepare to stop." << endl;
            break;
        case 3:
            cout << "Category: GREEN" << endl;
            cout << "Detail  : Go, the way is clear." << endl;
            break;
        default:
            cout << "Category: Invalid code" << endl;
            cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
