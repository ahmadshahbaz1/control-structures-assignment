// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P07 - Employee Designation Allowance
// Structure  : if-else (explicit nested if/else ladder)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int levelCode;
    cout << "Enter designation level (1=Intern ... 5=Manager): ";
    cin >> levelCode;

    // Every decision here is a genuine if-else pair; each 'else'
    // opens the next if-else pair, one level deeper than the last.
    if (levelCode == 1) {
        cout << "Category: Intern" << endl;
        cout << "Detail  : Monthly allowance: Rs 15000" << endl;
    } else {
        if (levelCode == 2) {
            cout << "Category: Junior Engineer" << endl;
            cout << "Detail  : Monthly allowance: Rs 60000" << endl;
        } else {
            if (levelCode == 3) {
                cout << "Category: Senior Engineer" << endl;
                cout << "Detail  : Monthly allowance: Rs 120000" << endl;
            } else {
                if (levelCode == 4) {
                    cout << "Category: Team Lead" << endl;
                    cout << "Detail  : Monthly allowance: Rs 180000" << endl;
                } else {
                    if (levelCode == 5) {
                        cout << "Category: Manager" << endl;
                        cout << "Detail  : Monthly allowance: Rs 250000" << endl;
                    } else {
                        cout << "Category: Invalid code" << endl;
                        cout << "Detail  : Please enter a code in the valid range." << endl;
                    }
                }
            }
        }
    }

    return 0;
}
