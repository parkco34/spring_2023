#include <iostream>
#include <string>
using namespace std;

class Creature 
{
    private:
        int type;
        int strength;
        int hitpoints;
        string getSpecies();

    public:
        Creature();
        Creature(int newType, int newStrength, int newHit);
        int getDamage();
}

class 
