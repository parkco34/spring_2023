#include <iostream>
#include <ctime>
#include <cstdlib>
#include "barlog.h"
#include "demon.h"

using namespace std;

// Default constructor
barlog::barlog() : demon(){}

// Constructor with arguments
barlog::barlog(int newstrength, int newhitpoints) : demon(newstrength, newhitpoints){}

// Method definition of getdamage
int barlog::getdamage()
{
    int value = getdamage();
    int randvalue = ((rand() % getStrength()) + 1);
    cout << "The barlog's rampage does " << randvalue << " damage!" << endl;
    value = (value + randvalue);
    return value;
}

// Method definition of getspecies
string barlog::getspecies() const
{
    return "barlog";
}
