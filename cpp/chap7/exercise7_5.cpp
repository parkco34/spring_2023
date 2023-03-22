// ====================================================================
//For single people, the standard exemption is $4,000; 
//for married people, the standard exemption is $7,000. 
//A person can also put up to 6% of 
//  his or her gross income in a pension plan.
// --------------------------------------------------------------------
//Between $0 and $15,000, the tax rate is 15%.
//Between $15,001 and $40,000, the tax is $2,250 plus 25% of the taxable income over $15,000.
//Over $40,000, the tax is $8,460 plus 35% of the taxable income over $40,000. 
// --------------------------------------------------------------------
//Prompt the user to enter the following information:
// Marital status
// - If the marital status is “married,” ask for the number of children under the age of 14
// Gross salary (If the marital status is “married” and both spouses have income, enter the combined salary.)
// Percentage of gross income contributed to a pension fund 
//
// Your program must consist of at least the following functions:
//    Function getData: This function asks the user to enter the relevant data.
//    Function taxAmount: This function computes and returns the tax owed.
//
// To calculate the taxable income, subtract the sum of the standard exemption, 
//   the amount contributed to a pension plan, and the personal exemption, which is 
//    $1,500 per person. 
//    (Note that if a married couple has two children under the age of 14, 
//     then the personal exemption is $1,500 ∗ 4 = $6,000.)
// ====================================================================
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Exemptions
const double EXEMPT_SINGLE = 4000;
const double EXEMPT_MARRIED = 7000;
const double EXEMPT_PERSONAL = 1500;

// Gets user input
void getData(char& married, int& numberOfChildren, double& grossSalary, double& pensionPercentage)
{
    cout << "Are you married?: (y/Y for yes) " << endl;
    cin >> married;

    if (married == 'y' || married == 'Y') {
        cout << "Enter the number of bastards under the age of 14: " << endl;
        cin >> numberOfChildren;
    }
    cout << "Enter your gross salary: (if you both earn, enter the sum of your salaries)" << endl;
    cin >> grossSalary;
    cout << "Enter the percentage of your pension: " << endl;
    cin >> pensionPercentage;
}

// Calculate the taxable income
double taxAmount(char married, int numberOfChildren, double grossSalary, float pensionPercentage)
{
    double tax, exemption, pensionAmount, personal, taxableIncome;
    
    if (married == 'y' || married == 'Y') {
        exemption = EXEMPT_MARRIED;
    }
    else {
        exemption = EXEMPT_SINGLE;
    }
    pensionAmount = (pensionPercentage / 100.00) * grossSalary;
    personal = numberOfChildren * EXEMPT_PERSONAL;
    taxableIncome = grossSalary - (exemption + pensionAmount + personal);

    if (taxableIncome >= 0.0 && taxableIncome <= 15000.0) {
        tax = taxableIncome * 0.15;
    } else if (taxableIncome >= 15001.00 && taxableIncome <= 40000.00) {
        tax = 2250.00 + taxableIncome * 0.25;
    } else {
        tax = 8460.00 + taxableIncome * 0.35;
    }

    return tax;
}

int main()
{
    int numberOfChildren;
    double grossSalary, pensionPercentage, tax;
    char married;

    getData(married, numberOfChildren, grossSalary, pensionPercentage);

    tax = taxAmount(married, numberOfChildren, grossSalary, pensionPercentage);
    cout << "Tax amount: " << tax << endl;
    return 0;
}
