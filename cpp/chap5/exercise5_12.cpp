//The population of town A is less than the population of town B. However, the population of town A is growing faster than the population of town B.
//
//Write a program that prompts the user to enter:
//
//    The population of town A
//    The population of town B
//    The growth rate of town A
//    The growth rate of town B
//
//The program outputs:
//    After how many years the population of town A will be greater than or equal to the population of town B
//    The populations of both the towns at that time.
//(A sample input is: Population of town A = 5,000, growth rate of town A = 4%, population of town B = 8,000, and growth rate of town B = 2%.)

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int townA, townB, years = 0;
    double rateA, rateB;
    cout << "Enter the population for town A: " << endl;
    cin >> townA;
    cout << "Enter the population for town B: " << endl;
    cin >> townB;
    cout << "Enter the growth rate for town A: " <<  endl;
    cin >> rateA;
    cout << "Enter the growth rate for town B: " << endl;
    cin >> rateB;
    cin.ignore();

    // Decimal form
    rateA /= 100.0;
    rateB /= 100.0;

    while (townA < townB) {
        townA *= (1 + rateA);
        townB *= (1 + rateB);
        years++;
    }

    cout << "After " << years << " years the population of town A will be greater than or equal to town B. " << endl;
    cout << "Population of town A: " << round(townA) << endl;
    cout << "Population of town B: " << round(townB) << endl;
}

// Correct program:
//#include <iostream>
//using namespace std;
//
//int main() {
//    int populationA, populationB;
//    double growthRateA, growthRateB;
//    int years = 0;
//
//    cout << "Enter the population of town A: ";
//    cin >> populationA;
//
//    cout << "Enter the population of town B: ";
//    cin >> populationB;
//
//    cout << "Enter the growth rate of town A (as a percentage): ";
//    cin >> growthRateA;
//
//    cout << "Enter the growth rate of town B (as a percentage): ";
//    cin >> growthRateB;
//
//    // Convert percentage growth rates to decimal growth rates
//    growthRateA /= 100;
//    growthRateB /= 100;
//
//    // Calculate years needed for population of town A to exceed or equal population of town B
//    while (populationA < populationB) {
//        populationA += populationA * growthRateA;
//        populationB += populationB * growthRateB;
//        years++;
//    }
//
//    cout << "After " << years << " years, the population of town A will be greater than or equal to the population of town B." << endl;
//    cout << "Population of town A: " << populationA << endl;
//    cout << "Population of town B: " << populationB << endl;
//
//    return 0;
//}
//
