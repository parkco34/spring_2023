#include <cstdint>
#include "primeFactorization.h"

primeFactorization::primeFactorization(int64_t n)
    : integerManipulation(n)
{
    first125000Primes(first125000Primes, 125000); // Takes in array
}

void primeFactorization::factorization()
{
    int number = 0;
    for (int i=2; i< sqrt(n); i++) {
        if (n % i == 0)
            number = i;
    }
    cout << "The prime factorization of " << n << " is: " << number << endl;
}
