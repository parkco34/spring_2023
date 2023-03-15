#include <iostream>
#include <iomanip>
using namespace std;

// Function to display general information about the fitness center and its charges
void displayInfo() {
    cout << "Welcome to Stay Healthy and Fit center.\n";
    cout << "This program determines the cost of a new membership.\n";
    cout << "If you are a senior citizen, then the discount is 30% of the regular membership price.\n";
    cout << "If you buy membership for twelve months and pay today, the discount is 15%.\n";
    cout << "If you buy and pay for 6 or more personal training session today, the discount on each session is 20%.\n\n";
}

// Function to get necessary information to determine the membership cost
void getInfo(double& regPrice, double& ptPrice, char& isSenior, int& ptSessions, int& numMonths) {
    cout << "Enter the cost of a regular membership per month: $";
    cin >> regPrice;
    cout << "Enter the cost of one personal training session: $";
    cin >> ptPrice;
    cout << "Are you a senior citizen (Y,y/N,n): ";
    cin >> isSenior;
    cout << "Enter the number of personal training sessions bought: ";
    cin >> ptSessions;
    cout << "Enter the number of month you are paying for: ";
    cin >> numMonths;
}

// Function to determine the membership cost
double calculateCost(double regPrice, double ptPrice, char isSenior, int ptSessions, int numMonths) {
    double membershipCost = 0.0;
    
    // Determine regular membership cost
    membershipCost = regPrice * numMonths;
    
    // Apply senior discount if applicable
    if (isSenior == 'Y' || isSenior == 'y') {
        membershipCost *= 0.7; // 30% discount
    }
    
    // Apply discount for paying for 12 months or more
    if (numMonths >= 12) {
        membershipCost *= 0.85; // 15% discount
    }
    
    // Apply discount for buying and paying for 6 or more personal training sessions
    if (ptSessions >= 6) {
        membershipCost -= (ptPrice * ptSessions * 0.2); // 20% discount on each session
    }
    
    return membershipCost;
}

int main() {
    double regPrice, ptPrice, membershipCost;
    char isSenior;
    int ptSessions, numMonths;
    
    displayInfo();
    getInfo(regPrice, ptPrice, isSenior, ptSessions, numMonths);
    membershipCost = calculateCost(regPrice, ptPrice, isSenior, ptSessions, numMonths);
    
    cout << fixed << setprecision(2);
    cout << "\nThe membership cost = $" << membershipCost << endl;
    
    return 0;
}

