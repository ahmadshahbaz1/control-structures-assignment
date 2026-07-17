// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P08 - Ticket Category Discount
// Structure  : switch (coded-choice input)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int ticketCode;
    cout << "Enter ticket category (1=Child, 2=Student, 3=Adult, 4=Senior Citizen): ";
    cin >> ticketCode;

    switch (ticketCode) {
        case 1:
            cout << "Category: Child" << endl;
            cout << "Detail  : Discount: 50%" << endl;
            break;
        case 2:
            cout << "Category: Student" << endl;
            cout << "Detail  : Discount: 30%" << endl;
            break;
        case 3:
            cout << "Category: Adult" << endl;
            cout << "Detail  : Discount: 0%" << endl;
            break;
        case 4:
            cout << "Category: Senior Citizen" << endl;
            cout << "Detail  : Discount: 40%" << endl;
            break;
        default:
            cout << "Category: Invalid code" << endl;
            cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
