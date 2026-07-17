// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P08 - Ticket Category Discount
// Structure  : if-else-if (ordered decision chain)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int ticketCode;
    cout << "Enter ticket category (1=Child, 2=Student, 3=Adult, 4=Senior Citizen): ";
    cin >> ticketCode;

    // A single flowing else-if chain checks the conditions in order
    // and stops at the first match.
    if (ticketCode == 1) {
        cout << "Category: Child" << endl;
        cout << "Detail  : Discount: 50%" << endl;
    }
    else if (ticketCode == 2) {
        cout << "Category: Student" << endl;
        cout << "Detail  : Discount: 30%" << endl;
    }
    else if (ticketCode == 3) {
        cout << "Category: Adult" << endl;
        cout << "Detail  : Discount: 0%" << endl;
    }
    else if (ticketCode == 4) {
        cout << "Category: Senior Citizen" << endl;
        cout << "Detail  : Discount: 40%" << endl;
    }
    else {
        cout << "Category: Invalid code" << endl;
        cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
