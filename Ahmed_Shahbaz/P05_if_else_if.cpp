// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P05 - Letter Grade to GPA Points
// Structure  : if-else-if (ordered decision chain)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int gradeCode;
    cout << "Enter grade code (1=A, 2=B, 3=C, 4=D, 5=F): ";
    cin >> gradeCode;

    // A single flowing else-if chain checks the conditions in order
    // and stops at the first match.
    if (gradeCode == 1) {
        cout << "Category: A" << endl;
        cout << "Detail  : GPA points: 4.0" << endl;
    }
    else if (gradeCode == 2) {
        cout << "Category: B" << endl;
        cout << "Detail  : GPA points: 3.0" << endl;
    }
    else if (gradeCode == 3) {
        cout << "Category: C" << endl;
        cout << "Detail  : GPA points: 2.0" << endl;
    }
    else if (gradeCode == 4) {
        cout << "Category: D" << endl;
        cout << "Detail  : GPA points: 1.0" << endl;
    }
    else if (gradeCode == 5) {
        cout << "Category: F" << endl;
        cout << "Detail  : GPA points: 0.0" << endl;
    }
    else {
        cout << "Category: Invalid code" << endl;
        cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
