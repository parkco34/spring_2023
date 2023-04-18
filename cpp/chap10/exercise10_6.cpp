/*
 * How to RUN:
        g++ -c romanImp.cpp -o romanImp.o -std=c++11
        g++ -c main.cpp -o main.o -std=c++11
        g++ main.o romanImp.o -o main

 */

//Write a program that converts a number entered in Roman numerals to a positive integer.
#include <iostream>
#include <string>
#include "roman.h"

using namespace std;

int main()
{
  string user;
    cout << "Enter your roman numerals: " << endl;
    cin >> user;
    romanType roman1(user);

    roman1.printRoman();
    roman1.printInt();

    return 0;
}

