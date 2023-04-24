//elf.cpp
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Creature.h"
#include "elf.h"

using namespace std;

// Default constructor
elf::elf() : Creature()
{
}

// Constructor with arguments
elf::elf(int newstrength, int newhitpoints) : Creature(newstrength, newhitpoints)
{
}

// Method definition of getDamage
int elf::getDamage()
{
    int value = Creature::getDamage();
    int m = (rand() % 10 + 1);
    if (m <= 5)
    {
        cout << "Arcane affinity inflicts " << value << " additional damage!" << endl;
        value = (value * 2);
    }
    return value;
}

// Method definition of getSpecies
string elf::getSpecies() const
{
    return "elf";
}
