// Correct
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Player
{
    string name;
    string position;
    int touchDowns;
    int catches;
    int passingYards;
    int receivingYards;
    int rushingYards;
};

void inputData(Player[], int);
void outputData(Player[], int);
int search(Player[], int, string);
void update(Player[], int, int);
void saveData(Player[], int);

int main()
{
    const int SIZE = 10;
    Player players[SIZE];
    int choice;
    int index;
    string name;

    inputData(players, SIZE);

    do
    {
        cout << "Select one of the following options: " << endl;
        cout << "1: To print a player's data" << endl;
        cout << "2: To print the entire data" << endl;
        cout << "3: To update a player's touch downs" << endl;
        cout << "4: To update a player's number of catches" << endl;
        cout << "5: To update a player's passing yards" << endl;
        cout << "6: To update a player's receiving yards" << endl;
        cout << "7: To update a player's rushing yards" << endl;
        cout << "99: To quit the program" << endl;
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter player's name: ";
                cin >> name;
                index = search(players, SIZE, name);
                if (index == -1)
                    cout << "Player not found" << endl;
                else
                    cout << "Name: " << players[index].name << endl;
                    cout << "Position: " << players[index].position << endl;
                    cout << "Touch Downs: " << players[index].touchDowns << endl;
                    cout << "Number of Catches: " << players[index].catches << endl;
                    cout << "Passing Yards: " << players[index].passingYards << endl;
                    cout << "Receiving Yards: " << players[index].receivingYards << endl;
                    cout << "Rushing Yards: " << players[index].rushingYards << endl;
                break;
            case 2:
                outputData(players, SIZE);
                break;
            case 3:
                cout << "Enter player's name: ";
                cin >> name;
                index = search(players, SIZE, name);
                if (index == -1)
                    cout << "Player not found" << endl;
                else
                    update(players, index, 3);
                break;
            case 4:
                cout << "Enter player's name: ";
                cin >> name;
                index = search(players, SIZE, name);
                if (index == -1)
                    cout << "Player not found" << endl;
                else
                    update(players, index, 4);
                break;
            case 5:
                cout << "Enter player's name: ";
                cin >> name;
                index = search(players, SIZE, name);
                if (index == -1)
                    cout << "Player not found" << endl;
                else
                    update(players, index, 5);
                break;
            case 6:
                cout << "Enter player's name: ";
                cin >> name;
                index = search(players, SIZE, name);
                if (index == -1)
                    cout << "Player not found" << endl;
                else
                    update(players, index, 6);
                break;
            case 7:
                cout << "Enter player's name: ";
                cin >> name;
                index = search(players, SIZE, name);
                if (index == -1)
                    cout << "Player not found" << endl;
                else
                    update(players, index, 7);
                break;
            case 99:
                cout << "Would you like to save data: (y,Y/n,N) ";
                cin >> name;
                if (name == "y" || name == "Y")
                    saveData(players, SIZE);
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 99);

    return 0;
}

void inputData(Player players[], int size)
{
    ifstream inFile;
    inFile.open("Ch9_Ex7Data.txt");

    for (int i = 0; i < size; i++)
    {
        inFile >> players[i].name;
        inFile >> players[i].position;
        inFile >> players[i].touchDowns;
        inFile >> players[i].catches;
        inFile >> players[i].passingYards;
        inFile >> players[i].receivingYards;
        inFile >> players[i].rushingYards;
    }

    inFile.close();
}

void outputData(Player players[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Name: " << players[i].name << endl;
        cout << "Position: " << players[i].position << endl;
        cout << "Touch Downs: " << players[i].touchDowns << endl;
        cout << "Number of Catches: " << players[i].catches << endl;
        cout << "Passing Yards: " << players[i].passingYards << endl;
        cout << "Receiving Yards: " << players[i].receivingYards << endl;
        cout << "Rushing Yards: " << players[i].rushingYards << endl;
    }
}

int search(Player players[], int size, string name)
{
    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if (players[i].name == name)
        {
            index = i;
            break;
        }
    }

    return index;
}

void update(Player players[], int index, int choice)
{
    int value;

    switch (choice)
    {
        case 3:
            cout << "Enter new value: ";
            cin >> value;
            players[index].touchDowns += value;
            break;
        case 4:
            cout << "Enter new value: ";
            cin >> value;
            players[index].catches += value;
            break;
        case 5:
            cout << "Enter new value: ";
            cin >> value;
            players[index].passingYards += value;
            break;
        case 6:
            cout << "Enter new value: ";
            cin >> value;
            players[index].receivingYards += value;
            break;
        case 7:
            cout << "Enter new value: ";
            cin >> value;
            players[index].rushingYards += value;
            break;
    }
}

void saveData(Player players[], int size)
{
    ofstream outFile;
    outFile.open("Ch9_Ex7Data.dat");

    for (int i = 0; i < size; i++)
    {
        outFile << players[i].name << endl;
        outFile << players[i].position << endl;
        outFile << players[i].touchDowns << endl;
        outFile << players[i].catches << endl;
        outFile << players[i].passingYards << endl;
        outFile << players[i].receivingYards << endl;
        outFile << players[i].rushingYards << endl;
    }

    outFile.close();
}

