#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <string>
using namespace std;

class Creature
{
private:
    int type;
    int strength;
    int hitpoints;
    string getSpecies() const;

public:
    Creature();
    Creature(int newStrength, int newHitpoints);
    Creature(int newType, int newStrength, int newHitpoints);
    int getDamage();
    //accessors and mutators
    int getHitpoints();
    int getStrength();
    void setHitpoints(int newHitpoints);
    void setStrength(int newStrength);
};

#endif
