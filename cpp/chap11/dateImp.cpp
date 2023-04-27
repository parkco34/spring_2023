#include <iostream>
#include "date.h"

using namespace std;

date::date(int month, int day, int year) {
    if (isValidDate(month, day, year)) {
        dMonth = month;
        dDay = day;
        dYear = year;
    }
    else {
        cout << "Invalid date: " << month << "-" << day << "-" << year << endl;
        dMonth = 1;
        dDay = 1;
        dYear = 1900;
    }
}

void date::setDate(int month, int day, int year) {
    if (isValidDate(month, day, year)) {
        dMonth = month;
        dDay = day;
        dYear = year;
    }
    else {
        cout << "Invalid date: " << month << "-" << day << "-" << year << endl;
    }
}

void date::printDate() const {
    cout << "Date: " << dMonth << "-" << dDay << "-" << dYear << endl;
    if (isLeapYear()) {
        cout << "This is a leap year." << endl;
    }
    else {
        cout << "This is not a leap year." << endl;
    }
}

bool date::isLeapYear() const {
    if (dYear % 4 != 0) {
        return false;
    } 
    else if (dYear % 100 != 0) {
        return true;
    }
    else if (dYear % 400 != 0) {
        return false;
    }
    else {
        return true;
    }
}

int date::getDay() const {
    return dDay;
}

int date::getMonth() const {
    return dMonth;
}

int date::getYear() const {
    return dYear;
}

bool date::isValidDate(int month, int day, int year) const {
    if (month < 1 || month > 12) {
        return false;
    }
    if (year < 0) {
        return false;
    }
    if (day < 1) {
        return false;
    }
    if (month == 2) {
        if (isLeapYear()) {
            if (day > 29) {
                return false;
            }
        }
        else {
            if (day > 28) {
                return false;
            }
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30) {
            return false;
        }
    }
    else {
        if (day > 31) {
            return false;
        }
    }
    return true;
}

