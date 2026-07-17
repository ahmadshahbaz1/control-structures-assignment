// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P03 - Season by Month Code
// Structure  : if-else (explicit nested if/else ladder)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    // Every decision here is a genuine if-else pair; each 'else'
    // opens the next if-else pair, one level deeper than the last.
    if (month == 12) {
        cout << "Category: Winter" << endl;
        cout << "Detail  : Cold season" << endl;
    } else {
        if (month == 1) {
            cout << "Category: Winter" << endl;
            cout << "Detail  : Cold season" << endl;
        } else {
            if (month == 2) {
                cout << "Category: Winter" << endl;
                cout << "Detail  : Cold season" << endl;
            } else {
                if (month == 3) {
                    cout << "Category: Spring" << endl;
                    cout << "Detail  : Mild, flowers bloom" << endl;
                } else {
                    if (month == 4) {
                        cout << "Category: Spring" << endl;
                        cout << "Detail  : Mild, flowers bloom" << endl;
                    } else {
                        if (month == 5) {
                            cout << "Category: Spring" << endl;
                            cout << "Detail  : Mild, flowers bloom" << endl;
                        } else {
                            if (month == 6) {
                                cout << "Category: Summer" << endl;
                                cout << "Detail  : Hot season" << endl;
                            } else {
                                if (month == 7) {
                                    cout << "Category: Summer" << endl;
                                    cout << "Detail  : Hot season" << endl;
                                } else {
                                    if (month == 8) {
                                        cout << "Category: Summer" << endl;
                                        cout << "Detail  : Hot season" << endl;
                                    } else {
                                        if (month == 9) {
                                            cout << "Category: Autumn" << endl;
                                            cout << "Detail  : Leaves fall" << endl;
                                        } else {
                                            if (month == 10) {
                                                cout << "Category: Autumn" << endl;
                                                cout << "Detail  : Leaves fall" << endl;
                                            } else {
                                                if (month == 11) {
                                                    cout << "Category: Autumn" << endl;
                                                    cout << "Detail  : Leaves fall" << endl;
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
                    }
                }
            }
        }
    }

    return 0;
}
