#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double periodic_payment(double loanAmount, double annualInterest, double annualPayments, double years)
{
    double i = ((annualInterest / 100) / annualPayments);
    return (loanAmount * i) / (1 - (pow(1 + i), -annualPayments * years));
}

double loan_balance(double loanAmount, double annualInterest, double annualPayments, double payments, double years)
{
    double i = ((annualInterest / 100) / annualPayments);
    return periodic_payment(loanAmount, annualInterest, annualPayments, years) * ((1 - pow((1 + i), -1*(annualPayments*years - payments))) / i);
}

int main()
{
    double loanAmount, annualInterest, annualPayments, years, payments;
    char letter;

    cout << "Enter (Y/y) to find the periodic payment and unpaid balance after certain payments: " << endl;
    cin >> letter;
    cout << "Enter the Loan Amount: " << endl;
    cin >> loanAmount;
    cout << "Enter the Annual Interest Rate: " << endl;
    cin >> annualInterst;
    cout << "Enter the number of annual payments: " << endl;
    cin >> annualPayments;
    cout << "Enter the number of years: " << endl;
    cin >> years;

    
}

// Correct:
//#include <iostream>
//#include <iomanip>
//#include <cmath>
//
//using namespace std;
//
//double calculatePeriodicPayment(double loanAmount, double interestRate, int paymentsPerYear, int loanYears) {
//    double i = interestRate / (paymentsPerYear * 100);
//    int n = loanYears * paymentsPerYear;
//    double p = loanAmount * (i / (1 - pow(1 + i, -n)));
//    return p;
//}
//
//double calculateUnpaidBalance(double loanAmount, double interestRate, int paymentsPerYear, int loanYears, int paymentsMade) {
//    double i = interestRate / (paymentsPerYear * 100);
//    int n = loanYears * paymentsPerYear;
//    double p = calculatePeriodicPayment(loanAmount, interestRate, paymentsPerYear, loanYears);
//    double b = loanAmount * pow(1 + i, paymentsMade) - p * (pow(1 + i, paymentsMade) - 1) / i;
//    return b;
//}
//
//int main() {
//    char choice;
//    do {
//        cout << "Enter (Y/y) to find the periodic payment and unpaid balance after certain payments: ";
//        cin >> choice;
//
//        if (choice == 'Y' || choice == 'y') {
//            double loanAmount, interestRate;
//            int paymentsPerYear, loanYears, paymentsMade;
//
//            cout << "Enter the loan amount: ";
//            cin >> loanAmount;
//
//            cout << "Enter the interest rate per year as a percentage: ";
//            cin >> interestRate;
//
//            cout << "Enter the number of payments per year: ";
//            cin >> paymentsPerYear;
//
//            cout << "Enter the number of years for the loan: ";
//            cin >> loanYears;
//
//            double periodicPayment = calculatePeriodicPayment(loanAmount, interestRate, paymentsPerYear, loanYears);
//            cout << fixed << setprecision(2) << "The periodic payment is: " << periodicPayment << endl;
//
//            cout << "Enter the number of payments made: ";
//            cin >> paymentsMade;
//
//            double unpaidBalance = calculateUnpaidBalance(loanAmount, interestRate, paymentsPerYear, loanYears, paymentsMade);
//            cout << fixed << setprecision(2) << "The unpaid balance after " << paymentsMade << " payment(s) is: " << unpaidBalance << endl;
//        }
//    } while (choice == 'Y' || choice == 'y');
//
//    return 0;
//}
//
