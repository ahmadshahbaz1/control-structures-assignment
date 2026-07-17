// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P05 - Letter Grade to GPA Points
// Structure  : nested if (if inside if)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int gradeCode;
    cout << "Enter grade code (1=A, 2=B, 3=C, 4=D, 5=F): ";
    cin >> gradeCode;

    // Outer if: is the code in range [1, 5] at all?
    if (gradeCode >= 1 && gradeCode <= 5) {
        // Inner if: which half of the range is it in?
        if (gradeCode <= 3) {
            if (gradeCode == 1) {
                cout << "Category: A" << endl;
                cout << "Detail  : GPA points: 4.0" << endl;
            }
            if (gradeCode == 2) {
                cout << "Category: B" << endl;
                cout << "Detail  : GPA points: 3.0" << endl;
            }
            if (gradeCode == 3) {
                cout << "Category: C" << endl;
                cout << "Detail  : GPA points: 2.0" << endl;
            }
        }
        else {
            if (gradeCode == 4) {
                cout << "Category: D" << endl;
                cout << "Detail  : GPA points: 1.0" << endl;
            }
            if (gradeCode == 5) {
                cout << "Category: F" << endl;
                cout << "Detail  : GPA points: 0.0" << endl;
            }
        }
    }
    else {
        cout << "Category: Invalid code" << endl;
        cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
