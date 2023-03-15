// redo
#include <iostream>
#include <iomanip>

using namespace std;

double calculateBillingAmount(double hourlyRate, int consultingTime, bool hasLowIncome) {
    double billingAmount = 0.0;
    int freeConsultingTime = hasLowIncome ? 30 : 20;
    int billableTime = consultingTime - freeConsultingTime;

    if (billableTime > 0) {
        double rateMultiplier = hasLowIncome ? 0.4 : 0.7;
        double hourlyRateMultiplier = hourlyRate * rateMultiplier;
        billingAmount = hourlyRateMultiplier * (billableTime / 60.0);
    }

    return billingAmount;
}

int main() {
    double yearlyIncome, hourlyRate;
    int consultingTime;
    bool hasLowIncome;

    cout << "Enter yearly income: $";
    cin >> yearlyIncome;
    hasLowIncome = yearlyIncome <= 25000;

    cout << "Enter hourly rate: $";
    cin >> hourlyRate;

    cout << "Enter consulting time in minutes: ";
    cin >> consultingTime;

    double billingAmount = calculateBillingAmount(hourlyRate, consultingTime, hasLowIncome);

    if (billingAmount == 0.0) {
        cout << "No charges." << endl;
    } else {
        cout << "Billing amount: $" << fixed << setprecision(2) << billingAmount << endl;
    }

    return 0;
}

