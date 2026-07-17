// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P10 - Shipping Method Selector
// Structure  : if (independent statements, no else)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    int shipCode;
    string category = "Invalid code";
    string detail = "Please enter a code in the valid range.";

    cout << "Enter shipping method (1=Standard, 2=Express, 3=Overnight, 4=International): ";
    cin >> shipCode;

    // Each check below is an independent 'if' statement.
    // No 'else' is used, so every condition is evaluated on its own.
    if (shipCode == 1) {
        category = "Standard";
        detail = "Delivery: 7 days, Cost: Rs 200";
    }
    if (shipCode == 2) {
        category = "Express";
        detail = "Delivery: 3 days, Cost: Rs 500";
    }
    if (shipCode == 3) {
        category = "Overnight";
        detail = "Delivery: 1 day, Cost: Rs 1200";
    }
    if (shipCode == 4) {
        category = "International";
        detail = "Delivery: 14 days, Cost: Rs 3500";
    }

    cout << "Category: " << category << endl;
    cout << "Detail  : " << detail << endl;
    return 0;
}
