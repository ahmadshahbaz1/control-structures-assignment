// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P02 - Day of the Week Classifier
// Structure  : if (independent statements, no else)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    int day;
    string category = "Invalid code";
    string detail = "Please enter a code in the valid range.";

    cout << "Enter day code (1=Mon ... 7=Sun): ";
    cin >> day;

    // Each check below is an independent 'if' statement.
    // No 'else' is used, so every condition is evaluated on its own.
    if (day == 1) {
        category = "Monday";
        detail = "Weekday";
    }
    if (day == 2) {
        category = "Tuesday";
        detail = "Weekday";
    }
    if (day == 3) {
        category = "Wednesday";
        detail = "Weekday";
    }
    if (day == 4) {
        category = "Thursday";
        detail = "Weekday";
    }
    if (day == 5) {
        category = "Friday";
        detail = "Weekday";
    }
    if (day == 6) {
        category = "Saturday";
        detail = "Weekend";
    }
    if (day == 7) {
        category = "Sunday";
        detail = "Weekend";
    }

    cout << "Category: " << category << endl;
    cout << "Detail  : " << detail << endl;
    return 0;
}
