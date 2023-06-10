// Consider the integer 6203851479017652638. Some of the operations that can be performed 
// on this integer are: 
//  - count the number of even digits, odd digits, and zeros; 
//  - find the sum of the digits; 
//  - reverse the digits; 
//  - split the number into blocks of three-digit numbers and
//     find the sum of these numbers
#include <iostream> // Both neeeded for in64_t
#include <cstdint>
#include <fstream>
using namespace std;

class integerManipulation
{
    public:
        // Accessors
        int64_t getNum();
        int getEvens();
        int getOdds();
        int getZeros();
        // Mutators
        void setNum(int64_t n);

        void reverseNum();
        // Count even/odd/zeros digits
        void classifyDigits();       
        int sumDigits();
        // Constructor with default param
        integerManipulation(int64_t n=0);
        bool isPalindrome(int64_t number);
        // Determine if integer is prime
        bool isPrime(int64_t number);
        // If Integer is prime, output index of prime
        // else output prime factors
        void primeFactorIndices();
        // Overload opeartors
        friend ostream& operator<<(ostream& os, const               integerManipulation theInteger);

    private:
        int64_t num;
        int64_t revNum;
        int evens;
        int odds;
        int zeros;
};
