// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P04 - Fast Food Menu Selector
// Structure  : if-else-if (ordered decision chain)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int item;
    cout << "Enter menu code (1=Burger, 2=Pizza Slice, 3=Fries, 4=Soft Drink, 5=Ice Cream): ";
    cin >> item;

    // A single flowing else-if chain checks the conditions in order
    // and stops at the first match.
    if (item == 1) {
        cout << "Category: Burger" << endl;
        cout << "Detail  : Price: Rs 350" << endl;
    }
    else if (item == 2) {
        cout << "Category: Pizza Slice" << endl;
        cout << "Detail  : Price: Rs 250" << endl;
    }
    else if (item == 3) {
        cout << "Category: Fries" << endl;
        cout << "Detail  : Price: Rs 150" << endl;
    }
    else if (item == 4) {
        cout << "Category: Soft Drink" << endl;
        cout << "Detail  : Price: Rs 100" << endl;
    }
    else if (item == 5) {
        cout << "Category: Ice Cream" << endl;
        cout << "Detail  : Price: Rs 200" << endl;
    }
    else {
        cout << "Category: Invalid code" << endl;
        cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
