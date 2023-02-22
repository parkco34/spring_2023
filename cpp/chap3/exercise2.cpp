#include <iostream>
#include <iomanip> // for setprecision and fixed

using namespace std;

int main() {
    double weight_kg, weight_lbs;
    const double KG_TO_LBS = 2.2;

    // Prompt user to enter weight in kilograms
    cout << "Enter weight in kilograms: ";
    cin >> weight_kg;

    // Convert weight from kg to lbs
    weight_lbs = weight_kg * KG_TO_LBS;

    // Output the equivalent weight in pounds with 2 decimal places
    cout << fixed << setprecision(2) << weight_kg << " kilograms is equal to " << weight_lbs << " pounds." << endl;

    return 0;
}

