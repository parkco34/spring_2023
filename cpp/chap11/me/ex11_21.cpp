//A positive integer n is called prime if n > 1 and the only factors of n are 1 and n. 
//It is known that a positive integer En> 1 is prime if n is not divisible by any prime integer m≤√n. 
//The 1230th prime number is 10,007. 
//Let t be an integer such that 2 ≤t≤ 100,000,000. Then t is prime if either t is equal to one of the first 1,230 prime numbers or t is not divisible by any of the first 1,230 prime numbers. 
//Write a program that declares an array of size 1,230 and stores the first 1,230 prime numbers in this array. 
//The program then uses the first 1,230 prime numbers to determine if a number between 2 and 100,000,000 is prime. If a number is not prime, then output at least one of its prime factors.
#include "primeFactorization.h"
#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    int64_t number;
    primeFactorization properNumber; 
    cout << "Enter a number between 2 and 270,000,000,000,000: ";
    cin >> number;
    properNumber.setNum(number);
    properNumber.factorization();

    return 0;
}
