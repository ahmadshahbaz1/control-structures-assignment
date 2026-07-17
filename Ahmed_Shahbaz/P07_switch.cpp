// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P07 - Employee Designation Allowance
// Structure  : switch (coded-choice input)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int levelCode;
    cout << "Enter designation level (1=Intern ... 5=Manager): ";
    cin >> levelCode;

    switch (levelCode) {
        case 1:
            cout << "Category: Intern" << endl;
            cout << "Detail  : Monthly allowance: Rs 15000" << endl;
            break;
        case 2:
            cout << "Category: Junior Engineer" << endl;
            cout << "Detail  : Monthly allowance: Rs 60000" << endl;
            break;
        case 3:
            cout << "Category: Senior Engineer" << endl;
            cout << "Detail  : Monthly allowance: Rs 120000" << endl;
            break;
        case 4:
            cout << "Category: Team Lead" << endl;
            cout << "Detail  : Monthly allowance: Rs 180000" << endl;
            break;
        case 5:
            cout << "Category: Manager" << endl;
            cout << "Detail  : Monthly allowance: Rs 250000" << endl;
            break;
        default:
            cout << "Category: Invalid code" << endl;
            cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
