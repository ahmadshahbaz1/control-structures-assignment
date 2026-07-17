// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P09 - Bank Account Type Interest Rate
// Structure  : nested if (if inside if)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int accountCode;
    cout << "Enter account type (1=Savings, 2=Current, 3=Fixed Deposit): ";
    cin >> accountCode;

    // Outer if: is the code in range [1, 3] at all?
    if (accountCode >= 1 && accountCode <= 3) {
        // Inner if: which half of the range is it in?
        if (accountCode <= 2) {
            if (accountCode == 1) {
                cout << "Category: Savings Account" << endl;
                cout << "Detail  : Annual interest: 5%" << endl;
            }
            if (accountCode == 2) {
                cout << "Category: Current Account" << endl;
                cout << "Detail  : Annual interest: 0%" << endl;
            }
        }
        else {
            if (accountCode == 3) {
                cout << "Category: Fixed Deposit" << endl;
                cout << "Detail  : Annual interest: 9%" << endl;
            }
        }
    }
    else {
        cout << "Category: Invalid code" << endl;
        cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
