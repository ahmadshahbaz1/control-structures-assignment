// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P10 - Shipping Method Selector
// Structure  : if-else-if (ordered decision chain)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int shipCode;
    cout << "Enter shipping method (1=Standard, 2=Express, 3=Overnight, 4=International): ";
    cin >> shipCode;

    // A single flowing else-if chain checks the conditions in order
    // and stops at the first match.
    if (shipCode == 1) {
        cout << "Category: Standard" << endl;
        cout << "Detail  : Delivery: 7 days, Cost: Rs 200" << endl;
    }
    else if (shipCode == 2) {
        cout << "Category: Express" << endl;
        cout << "Detail  : Delivery: 3 days, Cost: Rs 500" << endl;
    }
    else if (shipCode == 3) {
        cout << "Category: Overnight" << endl;
        cout << "Detail  : Delivery: 1 day, Cost: Rs 1200" << endl;
    }
    else if (shipCode == 4) {
        cout << "Category: International" << endl;
        cout << "Detail  : Delivery: 14 days, Cost: Rs 3500" << endl;
    }
    else {
        cout << "Category: Invalid code" << endl;
        cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
