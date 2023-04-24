//cyberdemon.h
#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include "demon.h"
#include <string>
using namespace std;

class cyberdemon : public demon
{
public:
    cyberdemon();
    cyberdemon(int newStrength, int newHitpoints);
    string getSpecies() const;
};

#endif
