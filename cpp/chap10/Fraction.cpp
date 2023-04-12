#include <iostream>
#include <cmath>
#include "Fraction.h"

using namespace std;

// Constructors
Fraction::Fraction() {
    num = 0;
    denom = 1;
}

Fraction::Fraction(int n) {
    num = n;
    denom = 1;
}

Fraction::Fraction(int n, int d) {
    num = n;
    denom = d;
}

void Fraction::output() {
    cout << num << "/" << denom;
}

// Add fractions
Fraction Fraction::add(Fraction frac) {
    Fraction ans;    
    ans.num = num * frac.denom + frac.num * denom;
    ans.denom = denom * frac.denom;

    return ans;
}

// Subtract fractions
Fraction Fraction::subtract(Fraction frac) {
    Fraction ans;
    ans.num = num * frac.denom - denom * frac.num;
    ans.denom = denom * frac.denom;

    return ans;
}

// Mutliply fractions
Fraction Fraction::multiply(Fraction frac) {
    Fraction ans;
    ans.num = num * frac.num;
    ans.denom = frac.denom * denom;

    return ans;
}

Fraction Fraction::divide(Fraction frac) {
    Fraction ans;
    ans.num = frac.denom * num;
    ans.denom = frac.num * denom;
}

bool Fraction::lessThan(Fraction frac) {
    Fraction ans;
    ans.num = frac.denom * num;
    ans.denom = frac.num * denom;

    return ans.num < ans.denom;
}

bool Fraction::lessThanEqual(Fraction frac) {
    Fraction ans;
    ans.num = num * frac.denom;
    ans.denom = denom * frac.num;

    return ans.num <= ans.denom;
}

bool greaterThan(Fraction frac) {
    Fraction ans;
    ans.num = num * frac.denom;
    ans.denom = denom * frac.num;

    return ans.num > ans.denom;
}

bool greaterThanEqual(Fraction frac) {
    Fraction ans;
    ans.num = num * frac.denom;
    ans.denom = denom * frac.num;
    
    return ans.num >= ans.denom;
}

int main()
{
    
}
