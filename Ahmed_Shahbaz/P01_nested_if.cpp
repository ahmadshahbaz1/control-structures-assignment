// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P01 - Traffic Light Signal Action
// Structure  : nested if (if inside if)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int signal;
    cout << "Enter traffic light code (1=Red, 2=Yellow, 3=Green): ";
    cin >> signal;

    // Outer if: is the code in range [1, 3] at all?
    if (signal >= 1 && signal <= 3) {
        // Inner if: which half of the range is it in?
        if (signal <= 2) {
            if (signal == 1) {
                cout << "Category: RED" << endl;
                cout << "Detail  : STOP the vehicle completely." << endl;
            }
            if (signal == 2) {
                cout << "Category: YELLOW" << endl;
                cout << "Detail  : Slow down and prepare to stop." << endl;
            }
        }
        else {
            if (signal == 3) {
                cout << "Category: GREEN" << endl;
                cout << "Detail  : Go, the way is clear." << endl;
            }
        }
    }
    else {
        cout << "Category: Invalid code" << endl;
        cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
