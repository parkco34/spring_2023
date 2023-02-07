#include <iostream>

using namespace std;

int main()
{
    // Constant
    const int GALLON = 120;
    // variables:
    double win_w1, win_l1, win_l2, win_w2, door_length, door_width, shelf_length, shelf_width, length, height, width;

    cout << "Please enter the dimensions for each window: " << endl;
    // Windows
    cin >> win_l1 >> win_w1 >> win_l2 >> win_w2;
    
    // door
    cout << "Enter dimensions for the door: " << endl;
    cin >> door_length >> door_width;

    // Bookshelf
    cout << "Enter the dimensions for the bookshelf: " << endl;
    cin >> shelf_length >> shelf_width;

    // Walls
    cout << "Finally, enter the dimensions of the walls: (include 3 values for lenght, width and height) \n" << endl;
    cin >> length >> width >> height;

    // Areas
    double areaOfWindows = (win_l1 * win_w1) + (win_l2 * win_w2);
    double areaOfDoor = door_length * door_width;
    double areaOfshelf = shelf_length * shelf_width;
    double areaOfWalls = 2 * height * (length + width);

    double paint = (areaOfWalls - (areaOfWindows + areaOfDoor + areaOfshelf)) / GALLON;
    cout << "\nTherefore, you will need " << paint << " gallons of paint." << endl;
}
