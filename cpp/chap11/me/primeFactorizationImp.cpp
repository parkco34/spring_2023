#include <cstdint>
#include <cmath>
#include "primeFactorization.h"

primeFactorization::primeFactorization(int64_t n)
    : integerManipulation(n)
{
    first125000PrimeNum(first125000Primes, 125000); // Takes in array
}

void primeFactorization::setNum(int64_t number)
{
    this->n = number;
}

void primeFactorization::factorization()
{
    int number = 0;
    for (int i=2; i< sqrt(this->n); i++) {
        if (this->n % i == 0)
            number = i;
    }
    cout << "The prime factorization of " << this->n << " is: " << number << endl;
}

void primeFactorization::first125000PrimeNum(int64_t list[], int length) {
    // Your implementation here
}

