//Write a function named digitCount that takes as a parameter an integer (as a long long value) and returns the number of odd, even, and zero digits. Also, write a program to test your function.
//
//An example of the program is shown below:
//
//Enter an integer: 111
//
//The number of even digits: 0
//The number of odd digits: 3
//The number of zeros: 0

#include <iostream>
using namespace std;

void digitCount(long long n, int& oddCount, int& evenCount, int& zeroCount)
{
    oddCount = evenCount = zeroCount = 0;
    
    while (n != 0) {
        int digit = n % 10;
        if (digit == 0) {
            zeroCount++;
        } else if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        n /= 10;
    }
}


int main()
{
    long long n;
    cout << "Enter an integer: ";
    cin >> n;

    int oddCount, evenCount, zeroCount;
    digitCount(n, oddCount, evenCount, zeroCount);

    cout << "The number of even digits: " << evenCount << endl;
    cout << "The number of odd digits: " << oddCount << endl;
    cout << "The number of zeros: " << zeroCount << endl;

    return 0;
}

