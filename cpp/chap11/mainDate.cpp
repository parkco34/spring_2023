#include <iostream>
#include "date.h"

using namespace std;

int main()
{
    int month, day, year;
    cout << "Enter the date (in format mm dd yyyy): ";
    cin >> month >> day >> year;

    date date(month, day, year);
    date.printDate();

    if (date.isLeapYear()) {
        cout << "this is a leap year" << endl;
    }
    else {
        cout << "this is not a leap year" << endl;
    }

    return 0;
}

