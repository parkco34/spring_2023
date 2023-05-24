#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

class Game {
    int size;
    std::vector<std::vector<char> > board;
    std::pair<int, int> playerPos, treasurePos;
    std::vector<std::pair<int, int> > enemyPos;

public:
    Game(int difficulty) {
        size = difficulty * 10;
        board = std::vector<std::vector<char> >(size, std::vector<char>(size, '.'));
        
        playerPos = {0, 0};
        treasurePos = {size - 1, size - 1};
        board[playerPos.first][playerPos.second] = 'P';
        board[treasurePos.first][treasurePos.second] = 'X';

        srand(time(0));
        for (int i = 0; i < size/10; i++) {
            int x = rand() % size, y = rand() % size;
            board[x][y] = 'T'; // trap

            x = rand() % size, y = rand() % size;
            board[x][y] = 'E'; // enemy
            enemyPos.push_back({x, y});
        }
    }

    void printBoard() {
        for (auto& row : board) {
            for (auto& cell : row) std::cout << cell << ' ';
            std::cout << '\n';
        }
    }

    bool valid(int x, int y) {
        return x >= 0 && x < size && y >= 0 && y < size;
    }

    bool movePlayer(char dir) {
        int dx = 0, dy = 0;
        if (dir == 'w') dx = -1;
        else if (dir == 's') dx = 1;
        else if (dir == 'a') dy = -1;
        else if (dir == 'd') dy = 1;

        int newX = playerPos.first + dx, newY = playerPos.second + dy;
        if (!valid(newX, newY)) return true;

        if (board[newX][newY] == 'X') return false;

        if (board[newX][newY] == 'T' || board[newX][newY] == 'E') {
            std::cout << "You lose!\n";
            return false;
        }

        std::swap(board[playerPos.first][playerPos.second], board[newX][newY]);
        playerPos = {newX, newY};

        return true;
    }

    void moveEnemies() {
        for (auto& enemy : enemyPos) {
            int dx = rand() % 3 - 1, dy = rand() % 3 - 1;
            int newX = enemy.first + dx, newY = enemy.second + dy;
            if (!valid(newX, newY) || board[newX][newY] != '.') continue;

            std::swap(board[enemy.first][enemy.second], board[newX][newY]);
            enemy = {newX, newY};
        }
    }

    void play() {
        char move;
        while (std::cin >> move) {
            if (!movePlayer(move)) break;
            moveEnemies();
            printBoard();
        }
    }
};

int main() {
    int difficulty;
    std::cout << "Enter difficulty level (1 for easy, 2 for medium, 3 for hard): ";
    std::cin >> difficulty;

    Game game(difficulty);
    game.printBoard();
    game.play();

    return 0;
}

