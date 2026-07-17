// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P02 - Day of the Week Classifier
// Structure  : if-else-if (ordered decision chain)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day code (1=Mon ... 7=Sun): ";
    cin >> day;

    // A single flowing else-if chain checks the conditions in order
    // and stops at the first match.
    if (day == 1) {
        cout << "Category: Monday" << endl;
        cout << "Detail  : Weekday" << endl;
    }
    else if (day == 2) {
        cout << "Category: Tuesday" << endl;
        cout << "Detail  : Weekday" << endl;
    }
    else if (day == 3) {
        cout << "Category: Wednesday" << endl;
        cout << "Detail  : Weekday" << endl;
    }
    else if (day == 4) {
        cout << "Category: Thursday" << endl;
        cout << "Detail  : Weekday" << endl;
    }
    else if (day == 5) {
        cout << "Category: Friday" << endl;
        cout << "Detail  : Weekday" << endl;
    }
    else if (day == 6) {
        cout << "Category: Saturday" << endl;
        cout << "Detail  : Weekend" << endl;
    }
    else if (day == 7) {
        cout << "Category: Sunday" << endl;
        cout << "Detail  : Weekend" << endl;
    }
    else {
        cout << "Category: Invalid code" << endl;
        cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
