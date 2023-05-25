#include <iostream> // Both neeeded for in64_t
#include <cstdint>
#include <string>
#include <fstream>
#include "integerManipulation.h"
using namespace std;

integerManipulation::integerManipulation(int64_t n)
{
    num = n;
    revNum = 0;
    evens = 0;
    odds = 0;
    zeros = 0;
}

// Accessors
int64_t integerManipulation::getNum()
{
    return num;
}

int integerManipulation::getEvens()
{
    return evens;
}

int integerManipulation::getOdds()
{
    return odds;
}

int integerManipulation::getZeros()
{
    return zeros;
}

// Mutators
void integerManipulation::setNum(int64_t n)
{
    num = n;
}

// Determines if digits are even/odd/zeros and makes count of each
void integerManipulation::classifyDigits()
{
    int64_t temp = abs(num);
    string strNum = to_string(temp);
    for (char c: strNum) {
        if ((c - '0') % 2 == 0) {
            evens++;

            if ((c - '0') == 0)
                zeros++;
        }
        else
            odds++;
    }
}

int integerManipulation::sumDigits()
{
    int sum = 0;
    int64_t temp = abs(num);
    string strNum = to_string(temp);

    for (char c: strNum) {
        sum += (c - '0');
    }

    return sum;
}

void integerManipulation::reverseNum()
{
    bool isNeg = false;
    int64_t reverseNum = 0;
    if (num < 0) {
        isNeg = true;
        num = -num; // Convert to positive number
    }

    while (num > 0) {
        int64_t digit = num % 10; // Extracts the last digit of num
        reverseNum = reverseNum * 10 + digit;
        num /= 10; // Remove last digit from num
    }

    if (isNeg) {
        // If original number was negative, convert reverseNum to negative
        reverseNum = -reverseNum;
    }
    num = reverseNum;
}

// Overload operators
ostream& operator<<(ostream& os, const integerManipulation myInteger)
{
    os << myInteger.num;
    return os;
}

