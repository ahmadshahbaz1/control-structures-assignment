// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P04 - Fast Food Menu Selector
// Structure  : nested if (if inside if)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int item;
    cout << "Enter menu code (1=Burger, 2=Pizza Slice, 3=Fries, 4=Soft Drink, 5=Ice Cream): ";
    cin >> item;

    // Outer if: is the code in range [1, 5] at all?
    if (item >= 1 && item <= 5) {
        // Inner if: which half of the range is it in?
        if (item <= 3) {
            if (item == 1) {
                cout << "Category: Burger" << endl;
                cout << "Detail  : Price: Rs 350" << endl;
            }
            if (item == 2) {
                cout << "Category: Pizza Slice" << endl;
                cout << "Detail  : Price: Rs 250" << endl;
            }
            if (item == 3) {
                cout << "Category: Fries" << endl;
                cout << "Detail  : Price: Rs 150" << endl;
            }
        }
        else {
            if (item == 4) {
                cout << "Category: Soft Drink" << endl;
                cout << "Detail  : Price: Rs 100" << endl;
            }
            if (item == 5) {
                cout << "Category: Ice Cream" << endl;
                cout << "Detail  : Price: Rs 200" << endl;
            }
        }
    }
    else {
        cout << "Category: Invalid code" << endl;
        cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
