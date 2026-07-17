// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P09 - Bank Account Type Interest Rate
// Structure  : if (independent statements, no else)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    int accountCode;
    string category = "Invalid code";
    string detail = "Please enter a code in the valid range.";

    cout << "Enter account type (1=Savings, 2=Current, 3=Fixed Deposit): ";
    cin >> accountCode;

    // Each check below is an independent 'if' statement.
    // No 'else' is used, so every condition is evaluated on its own.
    if (accountCode == 1) {
        category = "Savings Account";
        detail = "Annual interest: 5%";
    }
    if (accountCode == 2) {
        category = "Current Account";
        detail = "Annual interest: 0%";
    }
    if (accountCode == 3) {
        category = "Fixed Deposit";
        detail = "Annual interest: 9%";
    }

    cout << "Category: " << category << endl;
    cout << "Detail  : " << detail << endl;
    return 0;
}
