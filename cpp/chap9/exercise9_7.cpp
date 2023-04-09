//Write a program that declares a struct to store the data 
// of a football player (player’s name, player’s position, 
// number of touchdowns, number of catches, number of passing 
// yards, number of receiving yards, and the number of rushing yards).
//
//Declare an array of 10 components to store the data of 10 football players.
//
//Your program must contain a function to input data and a functio
// to output data. 
// - Add functions to search the array to find the index of a specific player, and up-date the data of a player. 
// (You may assume that the input data is stored in a file.) 
// Before the program terminates, give the user the option to save data in a file. 
// Your program should be MENU DRIVEN, giving the user various choices. 
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int NUM_OF_PLAYERS = 10;

/* player’s name, player’s position, number of touchdowns, 
 * number of catches, number of passing yards, 
 * number of receiving yards, and the number of rushing yards */
struct player {
    string name;
    string position;
    int touchdowns;
    int catches;
    int passingYards;
    int receivingYards;
    int rushingYards;
};

string lowerCase(string word);
void inputData(ifstream& infile);
void outputData(ifstream& outfile);
void updatePlayers(player players[]);
void updateData(player players[], int data);

// Gets user-defined update value
int getUpdate(int selection)
{
    int update;
    // Determines whether user needs to input data to be updated
    if (selection != 1) {
        cout << "Enter a value for which you intend to update: " << endl;
        cin >> update;
    }
    return update;
}
//string findPlayer()

int main()
{
    ifstream infile("Ch9_Ex7Data.txt");
    // Check if file is opened properly
    if (!infile) {
        cerr << "Unable to open file" << endl;
    }

    // Read file
    inputData(infile);
    infile.close();

    return 0;
}

string lowerCase(string word)
{
    for (int i=0; i < word.size(); i++) {
        word[i] = tolower(word[i]);
    }
    return word;
}

void inputData(ifstream& infile)
{
    player players[NUM_OF_PLAYERS];
    string line;
  
    // Gets all players information, storing it in an array
    for (int i=0; i < NUM_OF_PLAYERS; i++) {
        infile >> players[i].name;
        infile >> players[i].position;
        infile >> players[i].touchdowns;
        infile >> players[i].catches;
        infile >> players[i].passingYards;
        infile >> players[i].receivingYards;
        infile >> players[i].rushingYards;
    }
    
    // Update players
    updatePlayers(players);
}

//search the array to find the index of a specific player, and 
//    up-date the data of a player.
void updatePlayers(player players[])
{
    int touchdowns, catches, passingYards, 
        receivingYards, rushingYards;
    int selection = 0;

    while(selection != 99) {
        cout << "Select one of the following options:" << endl;
        cout << "1: To print a player's data" << endl;
        cout << "2: To print the entire data" << endl;
        cout << "3: To update a player's touch downs" << endl;
        cout << "4: To update a player's number of catches" << endl;
        cout << "5: To update a player's passing yards" << endl;
        cout << "6: To update a player's receiving yards" << endl;
        cout << "7: To update a player's rushing yards" << endl;
        cout << "99: To quit the program" << endl;

        // Get user input
        cin >> selection;

        switch(selection) {
            case 1:
                updateData(players, selection);
                break;

            case 2:
                // Outputs player data
                
                cout << "+++++++++++++++++++++++++++" << endl;
                for (int i=0; i < NUM_OF_PLAYERS; i++) {
                    cout << "+++++++++++++++++++++++++++" << endl;
                    cout << "Name: " << players[i].name << endl;
                    cout << "Position: " << players[i].position << endl;
                    cout << "Touchdowns: " << players[i].touchdowns << endl;
                    cout << "Catches: " << players[i].catches << endl;
                    cout << "Passing Yards: " << players[i].passingYards << endl;
                    cout << "Receiving Yards: " << players[i].receivingYards << endl;
                    cout << "Rushing Yards: " << players[i].rushingYards << endl;
                }
                cout << "+++++++++++++++++++++++++++" << endl;
                break;

            case 3:
                updateData(players, selection);
                break;

            case 4:

                updateData(players, selection);
                break;

            case 5:
                updateData(players, selection);
                break;

            case 6:
                updateData(players, selection);
                break;

            case 7:
                updateData(players, selection);
                break;

            case 99:
                cout << "Toodles!" << endl;
                break;
        }
    }
        
}

/* 
Takes an array, name of player for which to make update and 
the type of data to update
 * */
void updateData(player players[], int data)
{
    string name;
    int update; 

    for (int i=0; i < NUM_OF_PLAYERS; i++) {
        // If user entered one of the listed player names, 
        /*
         * I NEED TO DEAL WITH THIS SHIT !!!!!
         * */
        if (name == lowerCase(players[i].name)) {
            // Type of metric to update
            switch(data) {
                case 7:
                    cout << "Update Rushing Yards: " <<  endl;
                    players[i].rushingYards = stoi(update);
                    break;

                case 5:
                    cout << "Update Passing Yards: " << endl;
                    players[i].passingYards = stoi(update);
                    break;

                case 6:
                    cout << "Update Receiving Yards: " << endl;
                    players[i].receivingYards = stoi(update);
                    break;

                case 4:
                    cout << "Update catches: " << endl;
                    players[i].catches = stoi(update);
                    break;

                case 3:
                    cout << "Update a player's touch downs: " << endl;
                    players[i].touchdowns = stoi(update);
                    break;

                case 1:
                    cout << "Enter the name of the player: " << endl;
                    cout << "\nPlayers: " << endl;

                    // Show user the names of the players
                    cout << "+++++++++++++++++++++++++++" << endl;
                    for (int i=0; i < NUM_OF_PLAYERS; i++) {
                        cout << players[i].name << endl;
                    }
                    cout << "+++++++++++++++++++++++++++" << endl;
                    
                    // Get user input for player name for which to display to data
                    cin >> name;
                    name = lowerCase(name);

                    for (int i=0; i < NUM_OF_PLAYERS; i++) {
                        if (name == lowerCase(players[i].name)) {
                            cout << "______________________________________________________" << endl;
                            cout << "Player data " << endl;
                            cout << "Name: " << players[i].name << endl;
                            cout << "Position: " << players[i].position << endl;
                            cout << "Touchdowns: " << players[i].touchdowns << endl;
                            cout << "Catches: " << players[i].catches << endl;
                            cout << "Passing Yards: " << players[i].passingYards << endl;
                            cout << "Receiving Yards: " << players[i].receivingYards << endl;
                            cout << "Rushing Yards: " << players[i].rushingYards << endl;
                            cout << "______________________________________________________" << endl;
                        }
                    }

            }
        }
    }
}


