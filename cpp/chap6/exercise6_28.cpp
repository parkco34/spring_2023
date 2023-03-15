#include <iostream>
#include <iomanip>

using namespace std;

const int SMALL_CUP_SIZE = 9;
const int MEDIUM_CUP_SIZE = 12;
const int LARGE_CUP_SIZE = 15;
const double SMALL_CUP_COST = 1.75;
const double MEDIUM_CUP_COST = 1.90;
const double LARGE_CUP_COST = 2.00;

int smallCupCount = 0;
int mediumCupCount = 0;
int largeCupCount = 0;
double totalCoffeeSold = 0;
double totalMoneyMade = 0;

void showInstructions() {
    cout << "Welcome to Jason's coffee shop!" << endl;
    cout << "To buy coffee, enter the size (s/m/l) and quantity separated by a space." << endl;
    cout << "For example, to buy 2 medium cups of coffee, enter: m 2" << endl;
    cout << "To see the number of cups sold of each size, enter 's'." << endl;
    cout << "To see the total amount of coffee sold, enter 't'." << endl;
    cout << "To see the total money made, enter 'm'." << endl;
    cout << "To exit, enter 'x'." << endl;
}

void sellCoffee(char size, int quantity) {
    switch (size) {
        case 's':
            smallCupCount += quantity;
            totalCoffeeSold += quantity * SMALL_CUP_SIZE;
            totalMoneyMade += quantity * SMALL_CUP_COST;
            break;
        case 'm':
            mediumCupCount += quantity;
            totalCoffeeSold += quantity * MEDIUM_CUP_SIZE;
            totalMoneyMade += quantity * MEDIUM_CUP_COST;
            break;
        case 'l':
            largeCupCount += quantity;
            totalCoffeeSold += quantity * LARGE_CUP_SIZE;
            totalMoneyMade += quantity * LARGE_CUP_COST;
            break;
        default:
            cout << "Invalid size. Please try again." << endl;
            break;
    }
}

void showCupCounts() {
    cout << "Small cups sold: " << smallCupCount << endl;
    cout << "Medium cups sold: " << mediumCupCount << endl;
    cout << "Large cups sold: " << largeCupCount << endl;
}

void showTotalCoffeeSold() {
    cout << fixed << setprecision(1);
    cout << "Total coffee sold: " << totalCoffeeSold << " oz" << endl;
}

void showTotalMoneyMade() {
    cout << fixed << setprecision(2);
    cout << "Total money made: $" << totalMoneyMade << endl;
}

int main() {
    showInstructions();
    char size;
    int quantity;
    while (true) {
        cout << "Enter your choice: ";
        cin >> size;
        if (size == 'x') {
            break;
        }
        switch (size) {
            case 's':
            case 'm':
            case 'l':
                cin >> quantity;
                sellCoffee(size, quantity);
                break;
            case 't':
                showTotalCoffeeSold();
                break;
            case 'm':
                showTotalMoneyMade();
                break;
            case 'c':
                showCupCounts();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
    return 0;
}

