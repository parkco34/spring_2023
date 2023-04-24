//demon.cpp
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Creature.h"
#include "demon.h"
using namespace std;

//Default constructor
demon::demon() : Creature()
{
}

//Constructor with arguments
demon::demon(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints)
{
}

//Method definition of getDamage
int demon::getDamage()
{
    int value = Creature::getDamage();
    if (rand() % 4 == 1)
    {
        cout << "Demonic Rage inflicts 50 additional damage points ! " << endl;
        value = (value + 50);
    }
    return value;
}

//Method definition of getSpecies
string demon::getSpecies() const
{
    return "demon";
}

