// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P09 - Bank Account Type Interest Rate
// Structure  : switch (coded-choice input)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int accountCode;
    cout << "Enter account type (1=Savings, 2=Current, 3=Fixed Deposit): ";
    cin >> accountCode;

    switch (accountCode) {
        case 1:
            cout << "Category: Savings Account" << endl;
            cout << "Detail  : Annual interest: 5%" << endl;
            break;
        case 2:
            cout << "Category: Current Account" << endl;
            cout << "Detail  : Annual interest: 0%" << endl;
            break;
        case 3:
            cout << "Category: Fixed Deposit" << endl;
            cout << "Detail  : Annual interest: 9%" << endl;
            break;
        default:
            cout << "Category: Invalid code" << endl;
            cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
