Must do this exercise!

// Correct:
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//
//// function to initialize x, y, and z
//void initialize(int& x, int& y, char& z) {
//    x = 0;
//    y = 0;
//    z = ' ';
//}
//
//// function to get hours worked and rate per hour
//void getHoursRate(double& hours, double& rate) {
//    cout << "Enter hours worked: ";
//    cin >> hours;
//    cout << "Enter pay rate: ";
//    cin >> rate;
//}
//
//// function to calculate and return the paycheck amount
//double payCheck(double hours, double rate) {
//    double amount;
//    if (hours <= 40) {
//        amount = hours * rate;
//    } else {
//        amount = 40 * rate + (hours - 40) * 1.5 * rate;
//    }
//    return amount;
//}
//
//// function to print the hours worked, rate per hour, and paycheck amount
//void printCheck(double hours, double rate, double amount) {
//    cout << fixed << setprecision(2);
//    cout << "Hours worked:       " << setw(10) << hours << endl;
//    cout << "Pay Rate:           " << setw(10) << "$" << rate << endl;
//    cout << "This week's salary: " << setw(10) << "$" << amount << endl;
//}
//
//// function to set the value of x and y to 35 and 20, then prompt for input and update x
//void funcOne(int& x, int& y) {
//    x = 35;
//    y = 20;
//    int num;
//    cout << "Enter an integer: ";
//    cin >> num;
//    x = 2 * x + y - num;
//}
//
//// function to set the value of z to the next character stored in z
//void nextChar(char& z) {
//    z++;
//}
//
//int main() {
//    int x, y;
//    char z;
//    double rate, hours, amount;
//
//    initialize(x, y, z);
//
//    getHoursRate(hours, rate);
//
//    amount = payCheck(hours, rate);
//
//    printCheck(hours, rate, amount);
//
//    funcOne(x, y);
//
//    cout << "After funcOne: x = " << x << endl;
//
//    nextChar(z);
//
//    cout << "After nextChar: z = " << z << endl;
//
//    return 0;
//}
//
