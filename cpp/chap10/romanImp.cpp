#include <iostream>
#include <string>
#include "roman.h"

using namespace std;

romanType::romanType(const string& roman)
{
    /*
     * romanType class converts a Roman numeral character to its decimal equivalent and updates the value of intNum accordingly.
     * In Roman numerals, the smaller value appears before the larger value when subtracted
     */
    intNum = 0;
    int prev = 0;
    for (char c: roman) {
        int curr = romanToDecimal(c);
        /* If a smaller value appears before a larger value, 
         * it must be subtracted from the larger value to get 
         * the correct decimal equivalent. */
        intNum += (curr > prev) ? (curr - 2 * prev) : curr;
        prev = curr;
    }
}

void romanType::printRoman() const
{
    cout << romanNum << endl;
}

void romanType::printInt() const
{
    cout << intNum << endl;
}

int romanType::romanToDecimal(char r) const
{
    switch(r) {
        case 'M': return 1000;
        case 'D': return 500;
        case 'C': return 100;
        case 'L': return 50;
        case 'X': return 10;
        case 'V': return 5;
        case 'I': return 1;
        default: return 0;
    }
}
