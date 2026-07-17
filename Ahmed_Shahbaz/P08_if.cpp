// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P08 - Ticket Category Discount
// Structure  : if (independent statements, no else)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    int ticketCode;
    string category = "Invalid code";
    string detail = "Please enter a code in the valid range.";

    cout << "Enter ticket category (1=Child, 2=Student, 3=Adult, 4=Senior Citizen): ";
    cin >> ticketCode;

    // Each check below is an independent 'if' statement.
    // No 'else' is used, so every condition is evaluated on its own.
    if (ticketCode == 1) {
        category = "Child";
        detail = "Discount: 50%";
    }
    if (ticketCode == 2) {
        category = "Student";
        detail = "Discount: 30%";
    }
    if (ticketCode == 3) {
        category = "Adult";
        detail = "Discount: 0%";
    }
    if (ticketCode == 4) {
        category = "Senior Citizen";
        detail = "Discount: 40%";
    }

    cout << "Category: " << category << endl;
    cout << "Detail  : " << detail << endl;
    return 0;
}
