// ==========================================================
// Course     : Computer Programming - Summer 2026
// Assignment : Assignment 1 - Control Structures
// Problem    : P06 - Vehicle Fuel Type Selector
// Structure  : if (independent statements, no else)
// Student    : student_name  (replace with your name / roll number)
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    int fuelCode;
    string category = "Invalid code";
    string detail = "Please enter a code in the valid range.";

    cout << "Enter fuel type code (1=Petrol, 2=Diesel, 3=Electric, 4=Hybrid): ";
    cin >> fuelCode;

    // Each check below is an independent 'if' statement.
    // No 'else' is used, so every condition is evaluated on its own.
    if (fuelCode == 1) {
        category = "Petrol";
        detail = "Runs on refined gasoline.";
    }
    if (fuelCode == 2) {
        category = "Diesel";
        detail = "Runs on diesel fuel, high torque.";
    }
    if (fuelCode == 3) {
        category = "Electric";
        detail = "Runs on battery power, zero emissions.";
    }
    if (fuelCode == 4) {
        category = "Hybrid";
        detail = "Combines petrol engine and electric motor.";
    }

    cout << "Category: " << category << endl;
    cout << "Detail  : " << detail << endl;
    return 0;
}
