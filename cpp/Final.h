// You need to ask the user if they want an easy, medium or hard game (level 1, level 2 or level 3 if you prefer). 
// Create a class that has the array as an instance variable (and any other variables you feel necessary). 
// Dynamically create the array after the player decides on the difficulty.
// The board would be 10, 20 or 30 character-square board created dynamically (pointers or vectors) based on the difficulty
// Make the number of enemies and traps a percentage of the size of the board.  Choose how the player moves (what input they should use)
// Make a program that outputs a simple grid based gameboard to the screen using either numbers or characters.
// i.e. SUMBIT the CPP file and then copy the code to a WORD Document and upload BOTH documents here. (for plagiarism check)
// HINT: Don't let the player move off the gameboard! You program will crash if they move off the top or bottom of the board!
// ★★ Add enemies that move randomly in any direction once per turn. (enemies just like traps cause the player to lose if touched)
// Allow the user (marked by G in the example) to move either up, down, left, or right each turn. If the player steps on a trap then they lose. If they make it to the treasure 'X' then they win.
/*
 - Board
 - Player
*/
#ifndef GAME_H
#def GAME_H

class Final
{
    private:
        int** grid; // Pointer-to-pointer used to dynamically allocate a 2D array
        int size;

    public:
        //Constructor
        Final(int difficulty);

        //Destructor
        ~Final();

        //Accessors

        //Mutators

}

#endif GAME_H