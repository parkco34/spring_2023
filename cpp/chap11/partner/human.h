//human.h
#ifndef HUMAN_H
#define HUMAN_H

#include "Creature.h"
using namespace std;

class human : public Creature
{
public:
    human();
    human(int newstrength, int newhitpoints);
    string getSpecies() const;
};

#endif
