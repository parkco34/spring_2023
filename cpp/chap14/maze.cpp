#include <iostream>
#include <fstream>

using namespace std;

class Maze {
private:
    char** maze;
    int rows, cols;
    int startRow, startCol;

public:
    Maze(const string& filename) {
        ifstream file(filename);
        if (!file) {
            cerr << "Could not open file.\n";
            exit(1);
        }

        file >> rows >> cols;
        file >> startRow >> startCol;

        maze = new char*[rows];
        for (int i = 0; i < rows; i++) {
            maze[i] = new char[cols];
            for (int j = 0; j < cols; j++) {
                file >> noskipws >> maze[i][j];
            }
        }
    }

    ~Maze() {
        for (int i = 0; i < rows; i++) {
            delete[] maze[i];
        }
        delete[] maze;
    }

    bool findPath(int row, int col) {
        if (row < 0 || row >= rows || col < 0 || col >= cols) {
            return false;
        }

        if (maze[row][col] == '#' || maze[row][col] == '.') {
            return false;
        }

        maze[row][col] = '.';

        if (row == 0 || row == rows - 1 || col == 0 || col == cols - 1) {
            return true;
        }

        // try each direction
        if (findPath(row - 1, col) || findPath(row + 1, col)
            || findPath(row, col - 1) || findPath(row, col + 1)) {
            return true;
        }

        maze[row][col] = ' ';
        return false;
    }

    void solve() {
        if (findPath(startRow, startCol)) {
            cout << "Path found.\n";
        } else {
            cout << "No path found.\n";
        }
    }

    void printMaze() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << maze[i][j];
            }
            cout << '\n';
        }
    }
};

int main() {
    Maze maze("maze.txt");
    maze.solve();
    maze.printMaze();
    return 0;
}

