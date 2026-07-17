// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P06 - Vehicle Fuel Type Selector
// Structure  : if-else-if (ordered decision chain)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int fuelCode;
    cout << "Enter fuel type code (1=Petrol, 2=Diesel, 3=Electric, 4=Hybrid): ";
    cin >> fuelCode;

    // A single flowing else-if chain checks the conditions in order
    // and stops at the first match.
    if (fuelCode == 1) {
        cout << "Category: Petrol" << endl;
        cout << "Detail  : Runs on refined gasoline." << endl;
    }
    else if (fuelCode == 2) {
        cout << "Category: Diesel" << endl;
        cout << "Detail  : Runs on diesel fuel, high torque." << endl;
    }
    else if (fuelCode == 3) {
        cout << "Category: Electric" << endl;
        cout << "Detail  : Runs on battery power, zero emissions." << endl;
    }
    else if (fuelCode == 4) {
        cout << "Category: Hybrid" << endl;
        cout << "Detail  : Combines petrol engine and electric motor." << endl;
    }
    else {
        cout << "Category: Invalid code" << endl;
        cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
