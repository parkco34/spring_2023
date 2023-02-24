#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double total_area, first_area, second_area;
    int num_veggies;
    double seed_cost1, plant_cost1, fertilize_cost1, labor_cost1, selling_price1;
    double seed_cost2, plant_cost2, fertilize_cost2, labor_cost2, selling_price2;

    cout << "Enter total farm area (in acres): ";
    cin >> total_area;
    cout << "Enter number of vegetables (1 or 2): ";
    cin >> num_veggies;

    if (num_veggies == 1) {
        cout << "Enter seed cost, plantation cost, fertilizing cost, labor cost, and selling price per acre: ";
        cin >> seed_cost1 >> plant_cost1 >> fertilize_cost1 >> labor_cost1 >> selling_price1;

        double revenue = total_area * selling_price1;
        double expenses = total_area * (seed_cost1 + plant_cost1 + fertilize_cost1 + labor_cost1);
        double profit = revenue - expenses;

        cout << fixed << setprecision(2);
        cout << "Total revenue: $" << revenue << endl;
        cout << "Profit/Loss: $" << profit << endl;

    } else if (num_veggies == 2) {
        cout << "Enter portion of land used for first vegetable (in %): ";
        cin >> first_area;

        second_area = 100 - first_area;

        cout << "Enter seed cost, plantation cost, fertilizing cost, labor cost, and selling price per acre for first vegetable: ";
        cin >> seed_cost1 >> plant_cost1 >> fertilize_cost1 >> labor_cost1 >> selling_price1;

        cout << "Enter seed cost, plantation cost, fertilizing cost, labor cost, and selling price per acre for second vegetable: ";
        cin >> seed_cost2 >> plant_cost2 >> fertilize_cost2 >> labor_cost2 >> selling_price2;

        double revenue = (total_area * first_area / 100) * selling_price1 + (total_area * second_area / 100) * selling_price2;
        double expenses = (total_area * first_area / 100) * (seed_cost1 + plant_cost1 + fertilize_cost1 + labor_cost1) 
                        + (total_area * second_area / 100) * (seed_cost2 + plant_cost2 + fertilize_cost2 + labor_cost2);
        double profit = revenue - expenses;

        cout << fixed << setprecision(2);
        cout << "Total revenue: $" << revenue << endl;
        cout << "Profit/Loss: $" << profit << endl;

    } else {
        cout << "Invalid number of vegetables. Please enter 1 or 2." << endl;
    }

    return 0;
}

