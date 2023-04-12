// Show the customer the different breakfast items offered by the restaurant.
// Allow the customer to select more than one item from the menu.
// Calculate and print the bill.
//
// Function getData: This function loads the data into the array menuList.
// Function showMenu: This function shows the different items offered by the restaurant and tells the user how to select the items.
// Function printCheck: This function calculates and prints the check. (Note that the billing amount should include a 5% tax.)
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

struct menuItemType {
    string menuItem;
    double menuPrice;
};

// Read text file and load arrays with corresponding data
void getData(menuItemType menuList[], const int& MAX_ITEM_COUNT)
{
    ifstream infile("Ch9_Ex4Data.txt");
    string line;

    // Ensure file is openable
    if (!infile) {
        cerr << "Oops!  Unable to open file." << endl;
    }

    // Add elements to arrays from the text file
    int itemCount = 0;
    while(getline(infile, line)) {
        if (itemCount % 2 == 0) {
            menuList[itemCount/2].menuItem = line;
        }
        else {
            menuList[itemCount/2].menuPrice = stod(line);
        }
        itemCount++;
    }
}

int showMenu(menuItemType menuList[], const int SIZE, double& price)
{
    char selection;
    bool makeSelection = true;
    int numOfSelections = 0;
    int choice;
    price = 0;

    cout << "Welcome to ParkDaddy's Restaurant " << endl;
    cout << "----- Today's Menu -----" << endl;
    cout << fixed <<  setprecision(2);
  
    // Display menu
    for (int i=0; i< SIZE; i++) {
        cout << i+1 << ": " << left << setw(15) << menuList[i].menuItem << "$" << menuList[i].menuPrice << endl;
    }

    while(makeSelection && numOfSelections < SIZE) {

        cout << "You can make up to " << SIZE << " single order selections " << endl;
        cout << "Do you want to make selection Y/y (Yes), N/n (No): " << endl;
        cin >> selection;

        if (tolower(selection) == 'n') {
            cout << "TOODLES!" << endl;
            break;
        }

        while (tolower(selection) != 'y' && tolower(selection) != 'n') {
            cout << "Lo siento ... Invalid input. " << endl;
            cin >> selection;
            

            if (tolower(selection) == 'n') {
                cout << "TOODLES!" << endl;
                exit(1);
            }
        }

        cout << "Enter item number: (Press any letter-key to quit)" << endl;
        cin >> choice;

        // Sum selection prices
//        cout << "Your choice: (1-8)" << setw(7) << " " << choice << endl;
        // User selects menu options
        switch(choice) {
            case 1:
                price += menuList[choice-1].menuPrice;
                break;

            case 2:
                price += menuList[choice-1].menuPrice;
                break;

            case 3:
                price += menuList[choice-1].menuPrice;
                break;

            case 4:
                price += menuList[choice-1].menuPrice;
                break;

            case 5:
                price += menuList[choice-1].menuPrice;
                break;

            case 6:
                price += menuList[choice-1].menuPrice;
                break;

            case 7:
                price += menuList[choice-1].menuPrice;
                break;

            case 8:
                price += menuList[choice-1].menuPrice;
                break;

            default:
                cout << "Goodbye " <<  endl;
                makeSelection = false;  // Quits
        }

//        cout << "Price: " << price << endl;
        numOfSelections++;
    }

    return numOfSelections;
}

// Calculates price and prints the check, including the 5% tax
void printCheck(menuItemType menuList[], int numOfSelections, double price, double tax=0.05)
{
    double taxAmount = price * tax;
    double totalAmount = price + taxAmount;
    
    cout << "\n============================================================== " << endl;
    cout << setfill(' ') << setw(60) << "Welcome to Johnny's Restaurant\n" << endl;
    cout << left << setw(30) << "Item" << setw(10) << "Price" << endl;
    cout << setfill('-') << setw(40) << "" << endl;
    cout << setfill(' ');

    for (int i = 0; i < numOfSelections; i++) {
        cout << left << setw(30) << menuList[i].menuItem << right << setw(10) << fixed << setprecision(2) << "$" << menuList[i].menuPrice << endl;
    }

    cout << setfill('-') << setw(40) << "" << endl;
    cout << setfill(' ');

    cout << left << setw(30) << "Tax" << right << setw(10) << fixed << setprecision(2) << "$" << taxAmount << endl;
    cout << left << setw(30) << "Amount Due" << right << setw(10) << fixed << setprecision(2) << "$" << totalAmount << endl;
    cout << "\n============================================================== " << endl;
}


int main()
{
    double price;
    const int MAX_ITEM_COUNT = 8;
    menuItemType menuList[MAX_ITEM_COUNT];
    getData(menuList, MAX_ITEM_COUNT);
    int numOfSelections = showMenu(menuList, MAX_ITEM_COUNT, price);
    printCheck(menuList, numOfSelections, price);

    return 0;
}
