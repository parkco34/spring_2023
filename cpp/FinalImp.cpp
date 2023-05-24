#include "Final.h"
#include <iostream>
using namespace std;

Final::Final(int difficulty)
{
    switch(difficulty) {
        case 1:
            size = 10;
            break;

        case 2:
            size = 20;
            break;

        case 3:
            size = 30;
            break;
            
        default:
            cout << "Invalid difficulty. Please enter 1, 2, or 3." << endl;
            size = 10;
    }

    grid = new int*[size]; // Dynamically allocate an array of int pointers
    // Allocate an array of ints for each pointer
    for (int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            grid[i][j] = 0;
        }
    }
}

// Destructor 
Final::~Final()
{
    for(int i=0; i<size; i++) {
        delete [] grid[i]; // Deallocate array of pointers
    }
}