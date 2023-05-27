// Example: 6203851479017652638

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
    myInteger.classifyDigits();
    cout << "Getting the even/odd/zero counts" << endl;
    cout << "Evens: " << myInteger.getEvens() << endl;
    cout << "Odds: " << myInteger.getOdds() << endl;
    cout << "Zeros: " << myInteger.getZeros() << endl;

    // Reversing integer
    cout << "Reversing the integer" << endl;
    cout << "Old number: " << number << endl;
    myInteger.reverseNum();
    cout << "New number: " << myInteger << endl;

    cout << "Sum: " << myInteger.sumDigits() << endl;


    return 0;
}
