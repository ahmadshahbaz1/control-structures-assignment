// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P07 - Employee Designation Allowance
// Structure  : nested if (if inside if)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int levelCode;
    cout << "Enter designation level (1=Intern ... 5=Manager): ";
    cin >> levelCode;

    // Outer if: is the code in range [1, 5] at all?
    if (levelCode >= 1 && levelCode <= 5) {
        // Inner if: which half of the range is it in?
        if (levelCode <= 3) {
            if (levelCode == 1) {
                cout << "Category: Intern" << endl;
                cout << "Detail  : Monthly allowance: Rs 15000" << endl;
            }
            if (levelCode == 2) {
                cout << "Category: Junior Engineer" << endl;
                cout << "Detail  : Monthly allowance: Rs 60000" << endl;
            }
            if (levelCode == 3) {
                cout << "Category: Senior Engineer" << endl;
                cout << "Detail  : Monthly allowance: Rs 120000" << endl;
            }
        }
        else {
            if (levelCode == 4) {
                cout << "Category: Team Lead" << endl;
                cout << "Detail  : Monthly allowance: Rs 180000" << endl;
            }
            if (levelCode == 5) {
                cout << "Category: Manager" << endl;
                cout << "Detail  : Monthly allowance: Rs 250000" << endl;
            }
        }
    }
    else {
        cout << "Category: Invalid code" << endl;
        cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
