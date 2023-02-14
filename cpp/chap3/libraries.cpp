// Cory Parker
// CSC-223
// Chapter 3 Project
// Feb 11, 2023
// cmath

// PART A: 
// Identify a function that will find the absolute value of a number. 
// Indicate how many pieces of data must be passed to the function. 
// Indicate, what (if anything) will be returned by the function. 
// Demonstrate the appropriate use of the function in a short code fragment.
//
// PART B: 
// Refer to the functions contained in the cmath (math.h) library. 
// Identify a function that will determine the value of x raised to the y power. 
// Indicate how many pieces of data must be passed to the function. 
// Indicate, what (if anything) will be returned by the function. 
// Demonstrate the appropriate use of the function in a short code fragment
#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
    // Part A
    int number = -37;
    int absVal = abs(number);
    cout << "Absolute value of " << number << " is: " << absVal << endl;

    // Part B
    double a = 2;   // Base
    int b = 64;    // Exponent
    double power = pow(a,b);
    cout << a << " raised to the " << b << " power is: " << power << endl;

    return 0;
}
