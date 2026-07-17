// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P01 - Traffic Light Signal Action
// Structure  : if (independent statements, no else)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    int signal;
    string category = "Invalid code";
    string detail = "Please enter a code in the valid range.";

    cout << "Enter traffic light code (1=Red, 2=Yellow, 3=Green): ";
    cin >> signal;

    // Each check below is an independent 'if' statement.
    // No 'else' is used, so every condition is evaluated on its own.
    if (signal == 1) {
        category = "RED";
        detail = "STOP the vehicle completely.";
    }
    if (signal == 2) {
        category = "YELLOW";
        detail = "Slow down and prepare to stop.";
    }
    if (signal == 3) {
        category = "GREEN";
        detail = "Go, the way is clear.";
    }

    cout << "Category: " << category << endl;
    cout << "Detail  : " << detail << endl;
    return 0;
}
