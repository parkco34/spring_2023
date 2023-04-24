//elf.h
#ifndef ELF_H
#define ELF_H

#include "Creature.h"
using namespace std;

class elf : public Creature
{
public:
    elf();
    elf(int newStrength, int newHitpoints);
    int getDamage();
    string getSpecies() const;
};

#endif
