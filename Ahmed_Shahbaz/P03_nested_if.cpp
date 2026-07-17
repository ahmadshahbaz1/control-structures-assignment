// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P03 - Season by Month Code
// Structure  : nested if (if inside if)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    // Outer if: is the code in range [1, 12] at all?
    if (month >= 1 && month <= 12) {
        // Inner if: which half of the range is it in?
        if (month <= 6) {
            if (month == 1) {
                cout << "Category: Winter" << endl;
                cout << "Detail  : Cold season" << endl;
            }
            if (month == 2) {
                cout << "Category: Winter" << endl;
                cout << "Detail  : Cold season" << endl;
            }
            if (month == 3) {
                cout << "Category: Spring" << endl;
                cout << "Detail  : Mild, flowers bloom" << endl;
            }
            if (month == 4) {
                cout << "Category: Spring" << endl;
                cout << "Detail  : Mild, flowers bloom" << endl;
            }
            if (month == 5) {
                cout << "Category: Spring" << endl;
                cout << "Detail  : Mild, flowers bloom" << endl;
            }
            if (month == 6) {
                cout << "Category: Summer" << endl;
                cout << "Detail  : Hot season" << endl;
            }
        }
        else {
            if (month == 12) {
                cout << "Category: Winter" << endl;
                cout << "Detail  : Cold season" << endl;
            }
            if (month == 7) {
                cout << "Category: Summer" << endl;
                cout << "Detail  : Hot season" << endl;
            }
            if (month == 8) {
                cout << "Category: Summer" << endl;
                cout << "Detail  : Hot season" << endl;
            }
            if (month == 9) {
                cout << "Category: Autumn" << endl;
                cout << "Detail  : Leaves fall" << endl;
            }
            if (month == 10) {
                cout << "Category: Autumn" << endl;
                cout << "Detail  : Leaves fall" << endl;
            }
            if (month == 11) {
                cout << "Category: Autumn" << endl;
                cout << "Detail  : Leaves fall" << endl;
            }
        }
    }
    else {
        cout << "Category: Invalid code" << endl;
        cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
