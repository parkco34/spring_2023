#include "boxType.h"
/*
 * */

// OVERRIDING refers to the practice in object-oriented programming where a derived class provides a specific implementation of a method that is already provided by its base class. The method in the derived class must have the same name, return type, and parameters as the method in the base class. The keyword override can be used in C++ to indicate that a method is intended to override a method in the base class.

// OVERLOADING occurs when two or more methods in the same scope have the same name but different parameters. Overloading can occur with both regular functions and class methods. Overloaded functions are chosen based on the number and type of arguments passed.

// OVERRIDING
void boxType::print() const
{
    rectangleType::print();
    cout << "; Height = " << height;
}


