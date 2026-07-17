// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P06 - Vehicle Fuel Type Selector
// Structure  : switch (coded-choice input)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int fuelCode;
    cout << "Enter fuel type code (1=Petrol, 2=Diesel, 3=Electric, 4=Hybrid): ";
    cin >> fuelCode;

    switch (fuelCode) {
        case 1:
            cout << "Category: Petrol" << endl;
            cout << "Detail  : Runs on refined gasoline." << endl;
            break;
        case 2:
            cout << "Category: Diesel" << endl;
            cout << "Detail  : Runs on diesel fuel, high torque." << endl;
            break;
        case 3:
            cout << "Category: Electric" << endl;
            cout << "Detail  : Runs on battery power, zero emissions." << endl;
            break;
        case 4:
            cout << "Category: Hybrid" << endl;
            cout << "Detail  : Combines petrol engine and electric motor." << endl;
            break;
        default:
            cout << "Category: Invalid code" << endl;
            cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
