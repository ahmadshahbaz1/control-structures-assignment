// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P07 - Employee Designation Allowance
// Structure  : if (independent statements, no else)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    int levelCode;
    string category = "Invalid code";
    string detail = "Please enter a code in the valid range.";

    cout << "Enter designation level (1=Intern ... 5=Manager): ";
    cin >> levelCode;

    // Each check below is an independent 'if' statement.
    // No 'else' is used, so every condition is evaluated on its own.
    if (levelCode == 1) {
        category = "Intern";
        detail = "Monthly allowance: Rs 15000";
    }
    if (levelCode == 2) {
        category = "Junior Engineer";
        detail = "Monthly allowance: Rs 60000";
    }
    if (levelCode == 3) {
        category = "Senior Engineer";
        detail = "Monthly allowance: Rs 120000";
    }
    if (levelCode == 4) {
        category = "Team Lead";
        detail = "Monthly allowance: Rs 180000";
    }
    if (levelCode == 5) {
        category = "Manager";
        detail = "Monthly allowance: Rs 250000";
    }

    cout << "Category: " << category << endl;
    cout << "Detail  : " << detail << endl;
    return 0;
}
