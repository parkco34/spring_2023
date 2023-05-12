#include <iostream>
#include <fstream>
#include <vector>

class Maze {
public:
    Maze(const std::string& filename);
    ~Maze();

    void findPath();

private:
    char** maze;
    int rows;
    int cols;
    int startRow;
    int startCol;

    bool isValidMove(int row, int col);
    bool explore(int row, int col);
    void printMaze();
};

Maze::Maze(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Failed to open file: " << filename << std::endl;
        exit(1);
    }

    file >> rows >> cols;
    file >> startRow >> startCol;

    // Dynamically allocate the maze array
    maze = new char*[rows];
    for (int i = 0; i < rows; i++) {
        maze[i] = new char[cols];
        file >> maze[i];
    }

    file.close();
}

Maze::~Maze() {
    for (int i = 0; i < rows; i++) {
        delete[] maze[i];
    }
    delete[] maze;
}

bool Maze::isValidMove(int row, int col) {
    return (row >= 0 && row < rows && col >= 0 && col < cols && maze[row][col] == '.');
}

bool Maze::explore(int row, int col) {
    // Base case: reached the exit
    if (maze[row][col] == 'E') {
        return true;
    }

    // Mark the current position as visited
    maze[row][col] = 'X';

    // Recursive calls in four possible directions: up, down, left, right
    if (isValidMove(row - 1, col) && explore(row - 1, col)) {  // Up
        return true;
    }
    if (isValidMove(row + 1, col) && explore(row + 1, col)) {  // Down
        return true;
    }
    if (isValidMove(row, col - 1) && explore(row, col - 1)) {  // Left
        return true;
    }
    if (isValidMove(row, col + 1) && explore(row, col + 1)) {  // Right
        return true;
    }

    // No valid paths from the current position, backtrack
    maze[row][col] = '.';
    return false;
}

void Maze::findPath() {
    if (explore(startRow, startCol)) {
        std::cout << "Path found!" << std::endl;
        printMaze();
    } else {
        std::cout << "No path found!" << std::endl;
    }
}

void Maze::printMaze() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << maze[i][j];
        }
        std::cout << std::endl;
    }
}

int main() {
    Maze maze("maze.txt");
    maze.findPath();

    return 0;
}

