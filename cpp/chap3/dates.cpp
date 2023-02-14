// Cory Parker
// CSC-223
// Chapter 3 Project
// Feb 11, 2023
// DATES
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int month, day, year;
    char sep1, sep2;
    
    cout << "Please enter a date (format: mm/dd/yyyy): ";
    cin >> setw(2) >> month >> sep1 >> setw(2) >> day >> sep2 >> year;

    if (sep1 != '/' || sep2 != '/') 
    {
        cout << "\nIncorrect format.  Please use mm/dd/yyyy\n";
    }

    cout << "Month: " << setw(2) << setfill('0') << month << endl;
    cout << "Day: " << setw(2) << setfill('0') << day << endl;
    cout << "Year: " << setw(2) << setfill('0') << year << endl;

    return 0;
}
