#include <iostream>
#include "Final.h"
using namespace std;

Final::Final(int difficulty) {
    size = 10 * difficulty;
    player_x = size / 2;
    player_y = size / 2;

    // Initialize board
    board = new char*[size];
    for (int i = 0; i < size; i++) {
        board[i] = new char[size];
        for (int j = 0; j < size; j++) {
            board[i][j] = '-';
        }
    }

    // Player postition
    board[player_y][player_x] = 'G';

    // Traos
    srand(time(0));
    for (int i = 0; i < size/5; i++) {
        int tx = rand() % size;
        int ty = rand() % size;
        board[ty][tx] = 'T';
    }

    // enemies
    for (int i = 0; i < size/5; i++) {
        int ex = rand() % size;
        int ey = rand() % size;
        board[ey][ex] = 'E';
    }

    // Treausre
    int treasureX = rand() % size;
    int treasureY = rand() % size;
    board[treasureY][treasureX] = 'X';
}

Final::~Final() {
    for (int i = 0; i < size; i++)
        delete[] board[i];
    delete[] board;
}

bool Final::movePlayer(char direction) {
    int new_x = player_x;
    int new_y = player_y;

    switch(direction) {
        case 'w': new_y--; break;
        case 's': new_y++; break;
        case 'a': new_x--; break;
        case 'd': new_x++; break;
        default: return true;
    }

    if (new_x < 0 || new_y < 0 || new_x >= size || new_y >= size) {
        cout << "You can't move off the board! Try again.\n";
        return true;
    }

    if(board[new_y][new_x] == 'T' || board[new_y][new_x] == 'E') {
        cout << "You stepped on a trap or encountered an enemy! Game Over!\n";
        return false;
    }

    if(board[new_y][new_x] == 'X') {
        cout << "You found the treasure! You win!\n";
        return false;
    }

    board[player_y][player_x] = '-';
    player_x = new_x;
    player_y = new_y;
    board[player_y][player_x] = 'G';

    return true;
}

void Final::print() const {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
}
