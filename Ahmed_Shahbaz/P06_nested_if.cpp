// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P06 - Vehicle Fuel Type Selector
// Structure  : nested if (if inside if)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
using namespace std;

int main() {
    int fuelCode;
    cout << "Enter fuel type code (1=Petrol, 2=Diesel, 3=Electric, 4=Hybrid): ";
    cin >> fuelCode;

    // Outer if: is the code in range [1, 4] at all?
    if (fuelCode >= 1 && fuelCode <= 4) {
        // Inner if: which half of the range is it in?
        if (fuelCode <= 2) {
            if (fuelCode == 1) {
                cout << "Category: Petrol" << endl;
                cout << "Detail  : Runs on refined gasoline." << endl;
            }
            if (fuelCode == 2) {
                cout << "Category: Diesel" << endl;
                cout << "Detail  : Runs on diesel fuel, high torque." << endl;
            }
        }
        else {
            if (fuelCode == 3) {
                cout << "Category: Electric" << endl;
                cout << "Detail  : Runs on battery power, zero emissions." << endl;
            }
            if (fuelCode == 4) {
                cout << "Category: Hybrid" << endl;
                cout << "Detail  : Combines petrol engine and electric motor." << endl;
            }
        }
    }
    else {
        cout << "Category: Invalid code" << endl;
        cout << "Detail  : Please enter a code in the valid range." << endl;
    }

    return 0;
}
