#include "personType.h"
#include <iostream>

void personType::print() const
{
    cout << firstName << " " << ;lastName;
}

void setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

string getFirstName() const
{
    return firstName;
}

string getLastName() const
{
    return lastName;
}

personType::personType(string first, string last)
{
    firstName = first;
    lastName = last;
}
