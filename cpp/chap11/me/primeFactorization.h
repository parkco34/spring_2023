#ifndef primeFactorization_H
#define primeFactorization_H

#include "integerManipulation.h"
#include <cstdint>
using namespace std;

class primeFactorization : public integerManipulation
{
    public:
        // function to output prime factorization of num, where the prime facotorization of num is printed
        void factorization();
        // Constructor which creates  the first 125000 primes
        // Post Condition: num = n; zeros = 0; frist125000Primes = first 125000 primes
        primeFactorization(int64_t n=0);

    private:
        const int PRIMES = 125000;
        int64_t first125000Primes[PRIMES];
        // Function to determine and store the first 125000 primes
        // Postcondition: array of first125000Primes
        void first125000Primes(int64_t list[], int length);
};
    

#endif
