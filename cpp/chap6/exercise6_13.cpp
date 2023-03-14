#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double periodic_payment(double loanAmount, double annualInterest, double payments, double years)
{
    double i = (annualInterest / payments);
    return (loanAmount * i) / (1 - (pow(1 + i), -payments * years));
}

double 

int main()
{

}
