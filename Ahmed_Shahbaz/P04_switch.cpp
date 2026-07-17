// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P04 - Fast Food Menu Selector
// Structure  : switch (coded-choice input)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int item;
    cout << "Enter menu code (1=Burger, 2=Pizza Slice, 3=Fries, 4=Soft Drink, 5=Ice Cream): ";
    cin >> item;

    switch (item) {
        case 1:
            cout << "Category: Burger" << endl;
            cout << "Detail  : Price: Rs 350" << endl;
            break;
        case 2:
            cout << "Category: Pizza Slice" << endl;
            cout << "Detail  : Price: Rs 250" << endl;
            break;
        case 3:
            cout << "Category: Fries" << endl;
            cout << "Detail  : Price: Rs 150" << endl;
            break;
        case 4:
            cout << "Category: Soft Drink" << endl;
            cout << "Detail  : Price: Rs 100" << endl;
            break;
        case 5:
            cout << "Category: Ice Cream" << endl;
            cout << "Detail  : Price: Rs 200" << endl;
            break;
        default:
            cout << "Category: Invalid code" << endl;
            cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
