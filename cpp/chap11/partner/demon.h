//demon.h
#ifndef DEMON_H
#define DEMON_H

#include "Creature.h"

class demon : public Creature
{
public:
    demon();
    demon(int newstrength, int newhitpoints);
    int getDamage();
    std::string getSpecies() const;
};

#endif
