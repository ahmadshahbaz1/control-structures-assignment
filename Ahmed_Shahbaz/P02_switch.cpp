// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P02 - Day of the Week Classifier
// Structure  : switch (coded-choice input)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day code (1=Mon ... 7=Sun): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Category: Monday" << endl;
            cout << "Detail  : Weekday" << endl;
            break;
        case 2:
            cout << "Category: Tuesday" << endl;
            cout << "Detail  : Weekday" << endl;
            break;
        case 3:
            cout << "Category: Wednesday" << endl;
            cout << "Detail  : Weekday" << endl;
            break;
        case 4:
            cout << "Category: Thursday" << endl;
            cout << "Detail  : Weekday" << endl;
            break;
        case 5:
            cout << "Category: Friday" << endl;
            cout << "Detail  : Weekday" << endl;
            break;
        case 6:
            cout << "Category: Saturday" << endl;
            cout << "Detail  : Weekend" << endl;
            break;
        case 7:
            cout << "Category: Sunday" << endl;
            cout << "Detail  : Weekend" << endl;
            break;
        default:
            cout << "Category: Invalid code" << endl;
            cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
