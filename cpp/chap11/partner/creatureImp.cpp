#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Creature.h"

using namespace std;

//Default constructor
Creature::Creature()
{
    hitpoints = 10;
    strength = 10;
    srand(time(0));
}

//Constructor with two arguments
Creature::Creature(int newStrength, int newHitpoints)
{
    hitpoints = newHitpoints;
    strength = newStrength;
    srand(time(0));
}

//Constructor with three arguments
Creature::Creature(int newType, int newStrength, int newHitpoints)
{
    type = newType;
    hitpoints = newHitpoints;
    strength = newStrength;
    srand(time(0));
}

//Method definition of setStrength
void Creature::setStrength(int newStrength)
{
    strength = newStrength;
}

//Method definition of getStrength
int Creature::getStrength()
{
    return strength;
}

//Method definition of setHitpoints
void Creature::setHitpoints(int newHitpoints)
{
    hitpoints = newHitpoints;
}

//Method definition of getHitpoints
int Creature::getHitpoints()
{
    return hitpoints;
}

string Creature::getSpecies() const
{
    switch(type) {
        case 0: return "Human";
        case 1: return "Cyberdemon";
        case 2: return "Balrog";
        case 3: return "Elf";
    }

    return "I identify as a potato ( ͡ʘ ͜ʖ ͡ʘ)";
}

//Method definition of getDamage
int Creature::getDamage()
{
    int damage;

    damage = (rand() % strength) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;

    if ((type == 1) || (type == 2)) {
        damage += 50;
        cout << "DEmonic attach inflicts 50 " 
            << " additional damage points!" << endl;
    }

    if (type == 3) {
        if ((rand() % 10) == 0) {
            cout << "Magical attack inflicts " << damage << " additonal damage points!" << endl;

            damage *= 2;
        }
    }

    if (type == 2) {
        int damage2 = (rand() % strength) + 1;
        damage += damage2;
    }
    return damage;
}

