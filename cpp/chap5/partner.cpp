#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables for the current and previous employee IDs, total sales, and total commissions
    int empID, prevEmpID = 0, recordCount = 0;
    double retail, base, commission, totalSales = 0.0, totalCommission = 0.0, prevCommission = 0.0;

    // Open the input file and check for errors
    ifstream inputFile("carsales.dat");
    if (!inputFile) {
        cerr << "Error: could not open input file" << endl;
        return 1;
    }

    // Output the report header
    cout << setw(36) << "WEEKLY SALES REPORT" << endl;
    cout << "Employee Retail    Base     Commission" << endl;

    // Process each record in the file
    while (inputFile >> empID >> retail >> base) {
        // Calculate the commission for the current record
        commission = max(0.3 * base, 100.0);

        // If the employee ID has changed, display the total commission for the previous employee
        if (empID != prevEmpID) {
            if (prevEmpID != 0) {
                cout << "***Total Commission for " << prevEmpID << ": " << fixed << setprecision(2) << prevCommission << endl;
            }
            prevEmpID = empID;
            prevCommission = 0.0;
        }

        // Add the commission for the current record to the total commission for the current employee
        prevCommission += commission;

        // Output the current record
        cout << setw(6) << empID << " ";
        cout << fixed << setprecision(2) << setw(9) << retail << " ";
        cout << fixed << setprecision(2) << setw(8) << base << " ";
        cout << fixed << setprecision(2) << setw(11) << commission << endl;

        // Add the sales for the current record to the total sales and increment the record count
        totalSales += retail;
        recordCount++;
    }

    // Display the total commission for the last employee
    cout << "***Total Commission for " << prevEmpID << ": " << fixed << setprecision(2) << prevCommission << endl;

    // Output the record count, total sales, and total commission
    cout << endl << "Records: " << recordCount << endl;
    cout << "Total Sales: " << fixed << setprecision(2) << totalSales << endl;
    cout << "Total Commissions: " << fixed << setprecision(2) << prevCommission << endl;

    // Close the input file
    inputFile.close();

    return 0;
}


