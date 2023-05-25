#include <iostream>
#include <cstdint>
#include "integerManipulation.h"
using namespace std;

int main()
{
    int64_t number;
    cout << "Enter a long long integer: " << endl;
    cin >> number;
    integerManipulation myInteger(number);
    // Counting evens/odds/zeros
    cout << "Getting the even/odd/zero counts" << endl;
    myInteger.classifyDigits();
    cout << myInteger << endl;

    // Reversing integer
    cout << "Reversing the integer" << endl;
    cout << "Old number: " << number << endl;
    myInteger.reverseNum();
    cout << "New number: " << myInteger << endl;


    return 0;
}
