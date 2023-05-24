#ifndef FINAL_H
#define FINAL_H

class Final {
private:
    char** board; // Dynamic char array for the board
    int size;
    int player_x;
    int player_y;

public:
    Final(int difficulty);
    ~Final();
    bool movePlayer(char direction);
    void print() const;
};

#endif
