#include <iostream>
#include <string>
using namespace std;

int Creature::getDamage()
{
    int damage;
    damage = (rand() % strength) + 1;
    cout << getSpecies() << " attacks for "<< damage << " points!" << endl;

    if ((type == 2) || (type == 1)) {
        if ((rand() % 100) < 5) {
            damage += 50;
            cout << "Demonic attack inflicts 50 " << " additional damage points!" << endl;
        }
    }

    if (type == 3) {
        if ((rand() % 10) == 0) {
            cout << "Magical attack inflicts " << damage << " addditional damage points!" << endl;
            damage *= 2;
        }
    }

    if (type == 2) {
        int damage2 = (rand() % strength) + 1;
        cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
        damage damage + damage2;
    }
    return damage;
}
