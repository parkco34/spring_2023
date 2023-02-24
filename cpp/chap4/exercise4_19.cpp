//Enter the total farm area in acres.
//The number of vegetables (one or two) that the user wants to grow.
// If the user wants to grow two types of vegetables, then prompt the user to enter the portion (as a percentage) of land used for the first vegetable.
//  Enter the seed cost, plantation cost, fertilizing cost, labor cost, and selling price per acre.
//  If the user specified 2 vegetables, prompt the user to enter the items in step 4 for the second vegetable.
#include <iostream>
#include <iomanip> REDO THIS SHIT

using namespace std;

//int main()
//{
//    int veggieCount;
//    double acres, seedCost, plantationCost, fertilizerCost, 
//           laborCost, sellingPrice;
//    double veggiePercentage = 0;
//
//    double seedCost2, plantationCost2, fertilizerCost2, 
//           laborCost2, sellingPrice2;
//
//    cout << "Enter the amount of area you own (in acres): " << endl;
//    cin >> acres;
//    cout << "Enter the number of vegetables you intend to grow (one or two): " << endl;
//    cin >> veggieCount;
//
//    cout << "Enter the seed cost: " << endl;
//    cin >> seedCost;
//    cout << "Enter the plantation cost: " << endl;
//    cin >> plantationCost;
//    cout << "Enter the labor cost: " << endl;
//    cin >> laborCost;
//    cout << "Enter the fertilizer cost: " << endl;
//    cin >> fertilizerCost;
//    cout << "Enter the selling price per acre: " << endl;
//    cin >> sellingPrice;
//
//    if (veggieCount == 2) {
//        // Get veggie land percentage
//        cout << "What percentage of land do you intend to use for the first vegetable? " << endl;
//        cin >> veggiePercentage;
//
//        cout << "Enter the seed cost: " << endl;
//        cin >> seedCost2;
//        cout << "Enter the plantation cost: " << endl;
//        cin >> plantationCost2;
//        cout << "Enter the labor cost: " << endl;
//        cin >> laborCost2;
//        cout << "Enter the fertilizer cost: " << endl;
//        cin >> fertilizerCost2;
//        cout << "Enter the selling price per acre: " << endl;
//        cin >> sellingPrice2;    
//    }
//
//    // Revenue/Cost
//    double veggieArea1 = ((veggiePercentage ? veggiePercentage : 100.0) / 100.0) * acres;
//    double veggieRevenue1 = veggieArea1 * sellingPrice;
//    double veggieCost1 = laborCost + seedCost + fertilizerCost + plantationCost;
//    double profit1 = veggieRevenue1 - (veggieCost1 * veggieArea1);
//
//    if (veggieCount == 1) {
//
//        double totalProfit = profit1;
//        cout << "Total revenue is: $" << showpoint << veggieRevenue1 << endl;
//        cout << "Total Profit is: $" << showpoint << totalProfit << endl;
//    }
//
//    else {
//        // Cost/Revenue
//        double veggieArea2 = ((100.0 - veggiePercentage) / 100.0) * acres;
//        double veggieRevenue2 = veggieArea2 * sellingPrice2;
//        double veggieCost2 = laborCost2 + seedCost2 + fertilizerCost2 + plantationCost2;
//        double profit2 = veggieRevenue2 - (veggieCost2 * veggieArea2);
//
//        // Totals
//        double totalRevenue = veggieRevenue1 + veggieRevenue2;
//        double totalProfit = profit1 + profit2;
//        cout << "Total revenue is: $" << showpoint << totalRevenue << endl;
//        cout << "Total Profit is: $" << showpoint << totalProfit << endl;
//    }
//
//    return 0;
//}
