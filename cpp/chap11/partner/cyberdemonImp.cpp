//cyberdemon.cpp
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "cyberdemon.h"
#include "demon.h"
using namespace std;

//Default constructor
cyberdemon::cyberdemon() : demon(){}

//Constructor with arguments
cyberdemon::cyberdemon(int newStrength, int newHitpoints) : demon(newStrength, newHitpoints){}

//Method definition of getSpecies
string cyberdemon::getSpecies() const
{
    return "cyberdemon";
}
