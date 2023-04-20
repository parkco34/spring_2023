#ifndef H_extCreature
#define H_extCreature

#include <iostream>
#include <string>
using namespace std;

class extCreature: public Creature
{
    int type, strength, hitpoints;
    string getSpecies();

    public:
        // Constructors
        extCreature();
        extCreature(int newType, int newStrength, int newHit);
        int getDamage();
}

#endif
