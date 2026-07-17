// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P03 - Season by Month Code
// Structure  : if (independent statements, no else)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    int month;
    string category = "Invalid code";
    string detail = "Please enter a code in the valid range.";

    cout << "Enter month number (1-12): ";
    cin >> month;

    // Each check below is an independent 'if' statement.
    // No 'else' is used, so every condition is evaluated on its own.
    if (month == 12) {
        category = "Winter";
        detail = "Cold season";
    }
    if (month == 1) {
        category = "Winter";
        detail = "Cold season";
    }
    if (month == 2) {
        category = "Winter";
        detail = "Cold season";
    }
    if (month == 3) {
        category = "Spring";
        detail = "Mild, flowers bloom";
    }
    if (month == 4) {
        category = "Spring";
        detail = "Mild, flowers bloom";
    }
    if (month == 5) {
        category = "Spring";
        detail = "Mild, flowers bloom";
    }
    if (month == 6) {
        category = "Summer";
        detail = "Hot season";
    }
    if (month == 7) {
        category = "Summer";
        detail = "Hot season";
    }
    if (month == 8) {
        category = "Summer";
        detail = "Hot season";
    }
    if (month == 9) {
        category = "Autumn";
        detail = "Leaves fall";
    }
    if (month == 10) {
        category = "Autumn";
        detail = "Leaves fall";
    }
    if (month == 11) {
        category = "Autumn";
        detail = "Leaves fall";
    }

    cout << "Category: " << category << endl;
    cout << "Detail  : " << detail << endl;
    return 0;
}
