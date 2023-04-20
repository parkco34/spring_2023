#include <iostream>
#include <cstdlib>
#include <ctime>

class Creature {
private:
    int strength_;
    int hitpoints_;
public:
    Creature() : strength_(10), hitpoints_(10) {}
    Creature(int strength, int hitpoints) : strength_(strength), hitpoints_(hitpoints) {}
    int getStrength() const { return strength_; }
    void setStrength(int strength) { strength_ = strength; }
    int getHitpoints() const { return hitpoints_; }
    void setHitpoints(int hitpoints) { hitpoints_ = hitpoints; }
    virtual std::string getSpecies() const { return "Unknown"; }
    virtual int getDamage() const {
        int damage = (rand() % strength_) + 1;
        std::cout << getSpecies() << " attacks for " << damage << " damage points!" << std::endl;
        return damage;
    }
};

class Demon : public Creature {
public:
    Demon() : Creature() {}
    Demon(int strength, int hitpoints) : Creature(strength, hitpoints) {}
    virtual std::string getSpecies() const { return "Demon"; }
    virtual int getDamage() const {
        int damage = Creature::getDamage();
        if ((rand() % 20) == 0) {
            damage += 50;
            std::cout << "Demonic attack inflicts 50 additional damage points!" << std::endl;
        }
        return damage;
    }
};

class Balrog : public Demon {
public:
    Balrog() : Demon() {}
    Balrog(int strength, int hitpoints) : Demon(strength, hitpoints) {}
    virtual std::string getSpecies() const { return "Balrog"; }
    virtual int getDamage() const {
        int damage = Demon::getDamage();
        int damage2 = (rand() % getStrength()) + 1;
        std::cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << std::endl;
        damage += damage2;
        return damage;
    }
};

class Elf : public Creature {
public:
    Elf() : Creature() {}
    Elf(int strength, int hitpoints) : Creature(strength, hitpoints) {}
    virtual std::string getSpecies() const { return "Elf"; }
    virtual int getDamage() const {
        int damage = Creature::getDamage();
        if ((rand() % 10) == 0) {
            damage *= 2;
            std::cout << "Magical attack inflicts " << damage << " additional damage points!" << std::endl;
        }
        return damage;
    }
};

class Human : public Creature {
public:
    Human() : Creature() {}
    Human(int strength, int hitpoints) : Creature(strength, hitpoints) {}
    virtual std::string getSpecies() const { return "Human"; }
};

int main() {
    srand(time(nullptr));

    Creature c;
    Demon d;
    Balrog b;
    Elf e;
    Human h;

    for (int i = 0; i < 10; i++) {
        std::cout << "Round " << (i + 1) << ":" << std::endl;
        c.getDamage();
        d.getDamage();
        b.getDamage();
        e.getDamage();
        h.getDamage();
        std::cout << std::endl;
    }

    return 0;
}


