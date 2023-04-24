#include <iostream>
#include "Creature.h"
#include "demon.h"
#include "human.h"
#include "elf.h"
#include "cyberdemon.h"
#include "barlog.h"
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

// Program begins with a main method
int main()
{
    srand(time(0));

    human h1;
    elf e1;
    cyberdemon c1;
    barlog b1;
    human h(20, 30);
    elf e(40, 50);
    cyberdemon c(60, 70);
    barlog b(80, 90);
    cout << "default human strength/hitpoints: " << h1.getStrength()
         << "/" << h1.getHitpoints() << endl;
    cout << "default elf strength/hitpoints: " << e1.getStrength() << "/" << e1.getHitpoints() << endl;
    cout << "default cyberdemon strength/hitpoints: " <<
        c1.getStrength() << "/" << c1.getHitpoints() << endl;
    cout << "default barlog strength/hitpoints: " << b1.getStrength()
         << "/" << b1.getHitpoints() << endl;
    cout << "non-default human strength/hitpoints: " <<
        h.getStrength() << "/" << h.getHitpoints() << endl;
    cout << "non-default elf strength/hitpoints: " << e.getStrength()
         << "/" << e.getHitpoints() << endl;
    cout << "non-default cyberdemon strength/hitpoints: " <<
        c.getStrength() << "/" << c.getHitpoints() << endl;
    cout << "non-default barlog strength/hitpoints: " <<
        b.getStrength() << "/" << b.getHitpoints() << endl;
    cout << endl << endl;

    cout << "Examples of " << h.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++)
    {
        int damage = h.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    cout << "Examples of " << e.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++)
    {
        int damage = e.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    cout << "Examples of " << c.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++)
    {
        int damage = c.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    cout << "Examples of " << b.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++)
    {
        int damage = b.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
}

