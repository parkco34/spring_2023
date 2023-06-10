#include "partTimeEmployee.h"
#include <string>

partTimeEmployee::partTimeEmployee(string first, string last, double rate, double hours)
    : personType(first, last)
{
    if (rate >= 0)
        payRate = rate;

    else
        payRate = 0;

    if (hours >= 0)
        hoursWorked = hours;

    else
        hoursWorked = 0;
}

