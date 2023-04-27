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

    human human1;
    elf elf1;
    cyberdemon cyberdemon1;
    barlog barlog1;
    human hummus(20, 30);
    elf elfz(40, 50);
    cyberdemon cyber(60, 70);
    barlog barly(80, 90);
    cout << "default human strength/hitpoints: " << human1.getStrength()
         << "/" << human1.getHitpoints() << endl;
    cout << "default elf strength/hitpoints: " << elf1.getStrength() << "/" << elf1.getHitpoints() << endl;
    cout << "default cyberdemon strength/hitpoints: " <<
        cyberdemon1.getStrength() << "/" << cyberdemon1.getHitpoints() << endl;
    cout << "default barlog strength/hitpoints: " << barlog1.getStrength()
         << "/" << barlog1.getHitpoints() << endl;
    cout << "non-default human strength/hitpoints: " <<
        hummus.getStrength() << "/" << hummus.getHitpoints() << endl;
    cout << "non-default elf strength/hitpoints: " << elfz.getStrength()
         << "/" << elfz.getHitpoints() << endl;
    cout << "non-default cyberdemon strength/hitpoints: " <<
        cyber.getStrength() << "/" << cyber.getHitpoints() << endl;
    cout << "non-default barlog strength/hitpoints: " <<
        barly.getStrength() << "/" << barly.getHitpoints() << endl;
    cout << endl << endl;

    cout << "Examples of " << hummus.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++)
    {
        int damage = hummus.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    cout << "Examples of " << elfz.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++)
    {
        int damage = elfz.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    cout << "Examples of " << cyber.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++)
    {
        int damage = cyber.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    cout << "Examples of " << barly.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++)
    {
        int damage = barly.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;

    
}

