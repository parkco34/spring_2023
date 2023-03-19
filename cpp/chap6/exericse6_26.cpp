//Write a program that outputs inflation rates for two successive years and whether the 
//inflation is increasing or decreasing. 
//
//Ask the user to input the current price of an item and its price one year and two years ago. 
//
//To calculate the inflation rate for a year, subtract the price of the item for that 
//year from the price of the item one year ago and then divide the result by the price a year ago. 
//Your program must contain at least the following functions: 
//    a function to get the input, 
//    a function to calculate the results, 
//    and a function to output the results. 
//Use appropriate parameters to pass the information in and out of the function. Do not use any global variables.
#include <iostream>
#include <iomanip>

using namespace std;

void get_prices(double& price, double& priceOneYear, double& priceTwoYear)
{
    double price, priceOneYear, priceTwoYear;

    cout << "Enter current price of item: " << endl;
    cin >> price;
    cout << "Enter the price of the item one year ago: " << endl;
    cin >> priceOneYear;
    cout << "Enter the price of the item two years ago: " << endl;
    cin >> priceTwoYear;
}

int main()
{


}
