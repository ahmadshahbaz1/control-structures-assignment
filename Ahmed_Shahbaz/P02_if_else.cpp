// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P02 - Day of the Week Classifier
// Structure  : if-else (explicit nested if/else ladder)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day code (1=Mon ... 7=Sun): ";
    cin >> day;

    // Every decision here is a genuine if-else pair; each 'else'
    // opens the next if-else pair, one level deeper than the last.
    if (day == 1) {
        cout << "Category: Monday" << endl;
        cout << "Detail  : Weekday" << endl;
    } else {
        if (day == 2) {
            cout << "Category: Tuesday" << endl;
            cout << "Detail  : Weekday" << endl;
        } else {
            if (day == 3) {
                cout << "Category: Wednesday" << endl;
                cout << "Detail  : Weekday" << endl;
            } else {
                if (day == 4) {
                    cout << "Category: Thursday" << endl;
                    cout << "Detail  : Weekday" << endl;
                } else {
                    if (day == 5) {
                        cout << "Category: Friday" << endl;
                        cout << "Detail  : Weekday" << endl;
                    } else {
                        if (day == 6) {
                            cout << "Category: Saturday" << endl;
                            cout << "Detail  : Weekend" << endl;
                        } else {
                            if (day == 7) {
                                cout << "Category: Sunday" << endl;
                                cout << "Detail  : Weekend" << endl;
                            } else {
                                cout << "Category: Invalid code" << endl;
                                cout << "Detail  : Please enter a code in the valid range." << endl;
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
