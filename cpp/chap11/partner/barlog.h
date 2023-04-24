#include <iostream>
using namespace std;

//barlog.h
#ifndef BALROG_H
#define BALROG_H

#include "demon.h"

class barlog : public demon
{
public:
    barlog();
    barlog(int newstrength, int newhitpoints);
    int getdamage();
    string getspecies() const;
};

#endif
