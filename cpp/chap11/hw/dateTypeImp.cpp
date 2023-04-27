#include <string>
#include <iostream>
#include "dateType.h"
using namespace std;

// Mutator methods
void dateType::setDate(int month, int day, int year)
{
    dMonth = month;
    dDay = day;
    dYear= year;
}


// Acessor methods
void dateType::printDate()
{
    cout << dMonth << "-" << dDay << "-" << dYear << endl;

    if (isLeapYear())
        cout << "this is a leap year" << endl;
}

int dateType::getDay() const
{
    return dDay;
}

int dateType::getMonth() const
{
    return dMonth;
}

int dateType::getYear() const
{
    return dYear;
}

// Leap year
// isLeapYear function needs to be marked as const in the class declaration in dateType.h. This is because the isLeapYear function is being called in the printDate() function which is marked as const, meaning it promises not to modify the state of the object
bool dateType::isLeapYear() {
    if (dYear % 4 != 0) {
        return false;
    } else if (dYear % 100 != 0) {
        return true;
    } else if (dYear % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

dateType::dateType(int month, int day, int year)
{
    dMonth = month;
    dDay = day;
    dYear = year;
}



