//human.cpp
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Creature.h"
#include "human.h"

using namespace std;

// Default constructor
human::human() : Creature(){}

// Constructor with arguments
human::human(int newstrength, int newhitpoints) : Creature(newstrength, newhitpoints){}

// Method definition of getSpecies
string human::getSpecies() const
{
    return "human";
}
