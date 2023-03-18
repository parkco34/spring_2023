//The cost to become a member of a fitness center is as follows: 
//(a) the senior citizens discount is 30%; 
//(b) if the membership is bought and paid for 12 or more months, the discount is 15%; and 
//(c) if more than five personal training sessions are bought and paid for, the discount on each session is 20%. 
//
//Write a menu-driven program that determines the cost of a new membership. 
//Your program must contain a function that displays the general information 
//about the fitness center and its charges, a function to get all of the necessary information 
//to determine the membership cost, and a function to determine the membership cost. 
//Use appropriate parameters to pass information in and out of a function. (Do not use any global variables.)

#include <iostream>
#include <iomanip>


using namespace std;

// Got help with this one...

// Greeting
void greeting(void)
{
    cout << "Welcome to XYZ Fitness Center!" << endl;
    cout << "Our membership charges are as follows:" << endl;
    cout << "- Senior citizens receive a 30% discount" << endl;
    cout << "- If you buy and pay for 12 or more months, you receive a 15% discount" << endl;
    cout << "- If you buy more than five personal training sessions, you receive a 20% discount on each session" << endl;    cout << "HI!" << endl;
    cout << "========================================" << endl;
    cout << "Base cost: $24.99 and Session costs: $ 25.00" << endl;
    cout << "========================================" << endl;
}

// Determines membership cost
void get_info(bool& isSenior, int& memberMonths, int& sessions)
{
//    If we had passed these variables by value (i.e., without the & symbol), the function would receive copies of the variables' values, and any changes made to them within the function would not be reflected in the calling code.
//
//So in this case, passing the parameters by reference allows us to modify the values of the variables directly in the calling code, which is what we want in order to determine the membership cost
    cout << "Are you old as fuck? (Y/y)" << endl;
    char response;
    cin >> response;
    isSenior = (response == 'y' || response == 'Y');

    cout << "How many months you planning to sign up for? " << endl;
    cin >> memberMonths;
    cout << "How many personal training sessions you think would help your lazy azz? " << endl;
    cin >> sessions;
}

double cost_calculation(bool isSenior, int memberMonths, int sessions)
{
    double BASE_COST = 24.99;
    double totalCost = memberMonths * BASE_COST;

    if (isSenior) {
        totalCost *= .70; // 30% Discount
    } 

    if (memberMonths >= 12) {
        totalCost *= .85;   // 15% discount
    }

    if (sessions > 5) {
        const double session_cost = 25.0; // cost of personal training session EXAMPLE
        totalCost -= (sessions - 5) * session_cost * .2;    // 20% Discount
    }

    return totalCost;
}

int main()
{
    greeting();

    int memberMonths, sessions;
    bool isSenior;

    get_info(isSenior, memberMonths, sessions);
    
    double cost = cost_calculation(isSenior, memberMonths, sessions);
    cout << "Your membership cost is $" << cost << endl;

    return 0;
}


