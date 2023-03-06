#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    const double COMMISSION_PERCENTAGE = 0.3;

    int id, prevId;
    double retail, base, commission;
    double totalSales, totalCommission;

    ifstream inFile;
    inFile.open("carsales.dat");
    
    // Check if file openly properly
    if (!inFile) {
        cout << "Error!  Could not open file\n";
        return 1;
    }

    // Initial File reading
    inFile >> id;
    prevId = id;
 
    cout << "WEEKLY SALES REPORT" << endl;
    cout << "Employee    Retail\tBase\tCommission" << endl;
    cout << fixed << setprecision(2);

    // As long as there's stuff to read from file, readi it
    while (inFile >> retail >> base)
    {
        // If employee ID is the same, accumulate sums
        // Gauranteed to run for the first iteration
        if (id == prevId) {
            totalSales += retail;
            totalCommission += base * COMMISSION_PERCENTAGE;
            cout << "\nID: " << id << "\nRetail: " << retail << "\nBase: " << base << "\nCommission: " << ((base*COMMISSION_PERCENTAGE) >= 100 ? (base*COMMISSION_PERCENTAGE) : 100) << endl;
        }
        else {  // Otherwise initialize our sums to zero and setting our previous ID to the current value
            cout << "\n***Total Commission for " << prevId << ": " << totalCommission << endl;
            cout << "==================================================\n" << endl;
            cout << "ID: " << id << "\nRetail: " << retail << "\nBase: " << base << "\nCommission: " << ((base*COMMISSION_PERCENTAGE) >= 100 ? (base*COMMISSION_PERCENTAGE) : 100) << endl;
            totalSales = 0;
            totalCommission = 0;
            prevId = id;
        }
        
        inFile >> id;
    }

    cout << "\n***Total Commission for " << prevId << ": " << totalCommission << endl;
    cout << "==================================================" << endl;

    inFile.close();
    return 0;
}
