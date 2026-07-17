// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P05 - Letter Grade to GPA Points
// Structure  : if (independent statements, no else)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    int gradeCode;
    string category = "Invalid code";
    string detail = "Please enter a code in the valid range.";

    cout << "Enter grade code (1=A, 2=B, 3=C, 4=D, 5=F): ";
    cin >> gradeCode;

    // Each check below is an independent 'if' statement.
    // No 'else' is used, so every condition is evaluated on its own.
    if (gradeCode == 1) {
        category = "A";
        detail = "GPA points: 4.0";
    }
    if (gradeCode == 2) {
        category = "B";
        detail = "GPA points: 3.0";
    }
    if (gradeCode == 3) {
        category = "C";
        detail = "GPA points: 2.0";
    }
    if (gradeCode == 4) {
        category = "D";
        detail = "GPA points: 1.0";
    }
    if (gradeCode == 5) {
        category = "F";
        detail = "GPA points: 0.0";
    }

    cout << "Category: " << category << endl;
    cout << "Detail  : " << detail << endl;
    return 0;
}
