// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P04 - Fast Food Menu Selector
// Structure  : if (independent statements, no else)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    int item;
    string category = "Invalid code";
    string detail = "Please enter a code in the valid range.";

    cout << "Enter menu code (1=Burger, 2=Pizza Slice, 3=Fries, 4=Soft Drink, 5=Ice Cream): ";
    cin >> item;

    // Each check below is an independent 'if' statement.
    // No 'else' is used, so every condition is evaluated on its own.
    if (item == 1) {
        category = "Burger";
        detail = "Price: Rs 350";
    }
    if (item == 2) {
        category = "Pizza Slice";
        detail = "Price: Rs 250";
    }
    if (item == 3) {
        category = "Fries";
        detail = "Price: Rs 150";
    }
    if (item == 4) {
        category = "Soft Drink";
        detail = "Price: Rs 100";
    }
    if (item == 5) {
        category = "Ice Cream";
        detail = "Price: Rs 200";
    }

    cout << "Category: " << category << endl;
    cout << "Detail  : " << detail << endl;
    return 0;
}
