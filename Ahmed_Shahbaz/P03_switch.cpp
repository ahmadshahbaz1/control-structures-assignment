// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P03 - Season by Month Code
// Structure  : switch (coded-choice input)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    switch (month) {
        case 12:
        case 1:
        case 2:
            cout << "Category: Winter" << endl;
            cout << "Detail  : Cold season" << endl;
            break;
        case 3:
        case 4:
        case 5:
            cout << "Category: Spring" << endl;
            cout << "Detail  : Mild, flowers bloom" << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << "Category: Summer" << endl;
            cout << "Detail  : Hot season" << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "Category: Autumn" << endl;
            cout << "Detail  : Leaves fall" << endl;
            break;
        default:
            cout << "Category: Invalid code" << endl;
            cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
