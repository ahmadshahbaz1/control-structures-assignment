// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P02 - Day of the Week Classifier
// Structure  : nested if (if inside if)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day code (1=Mon ... 7=Sun): ";
    cin >> day;

    // Outer if: is the code in range [1, 7] at all?
    if (day >= 1 && day <= 7) {
        // Inner if: which half of the range is it in?
        if (day <= 4) {
            if (day == 1) {
                cout << "Category: Monday" << endl;
                cout << "Detail  : Weekday" << endl;
            }
            if (day == 2) {
                cout << "Category: Tuesday" << endl;
                cout << "Detail  : Weekday" << endl;
            }
            if (day == 3) {
                cout << "Category: Wednesday" << endl;
                cout << "Detail  : Weekday" << endl;
            }
            if (day == 4) {
                cout << "Category: Thursday" << endl;
                cout << "Detail  : Weekday" << endl;
            }
        }
        else {
            if (day == 5) {
                cout << "Category: Friday" << endl;
                cout << "Detail  : Weekday" << endl;
            }
            if (day == 6) {
                cout << "Category: Saturday" << endl;
                cout << "Detail  : Weekend" << endl;
            }
            if (day == 7) {
                cout << "Category: Sunday" << endl;
                cout << "Detail  : Weekend" << endl;
            }
        }
    }
    else {
        cout << "Category: Invalid code" << endl;
        cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
