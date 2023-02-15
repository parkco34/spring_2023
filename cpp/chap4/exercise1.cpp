#include <fstream>
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    ifstream inFile;
    ofstream outFile;

    inFile.open("inData.txt");
    outFile.open("outData.txt");

    string firstName, lastName, department;
    double salary, bonus, taxes, distance, time, cups, cupCost, salesAmount;

    inFile >> firstName >> lastName >> department;
    inFile >> salary >> bonus >> taxes;
    inFile >> distance >> time;
    inFile >> cups >> cupCost;

    double netSalary = 4116.00;
    double averageSpeed = distance / time;
    salesAmount = cups * cupCost;

    outFile << "Name: " << firstName << " " << lastName << ", Department: " << department << endl;
    outFile << "Monthly gross salary: $" << fixed << setprecision(2) << salary << ", Monthly Bonus: " << bonus << "%, Taxes: " << taxes << "%" << endl;
    outFile << "Paycheck: $" << fixed << setprecision(2) << netSalary << endl;

    outFile << "Distance Traveled: " << distance << " miles, ";
    outFile << "Traveling Time: " << time << " hours" << endl;
    outFile << "Average Speed: " << averageSpeed << " miles per hour" << endl;
    outFile << "Number of Coffee Cups Sold: " <<  setprecision(0) << cups;
    outFile << ", Cost: $" << setprecision(2) << cupCost << " per cup" << endl;
    outFile << "Sales Amount = $" << setprecision(2) << salesAmount << endl;

    inFile.close();
    outFile.close();
}

