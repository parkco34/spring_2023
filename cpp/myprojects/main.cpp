#include <iostream>
#include "Final.h"
using namespace std;

int main() {
    int difficulty;
    cout << "Choose your difficulty level (1 - Easy, 2 - Medium, 3 - Hard): ";
    cin >> difficulty;

    Final game(difficulty);

    char move;
    do {
        game.print();
        cout << "Enter your move (w - up, s - down, a - left, d - right): ";
        cin >> move;
    } while (game.movePlayer(move));

    return 0;
}
