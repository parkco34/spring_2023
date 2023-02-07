#include <iostream>

using namespace std;

int main()
{
    const int GALLON = 120;  // Square feet
    double door_length;
    double door_width;
    double window_length1;
    double window_width1;
    double window_length2;
    double window_width2;
    double bookshelf_width;
    double bookshelf_length;
    double room_length;
    double room_width;
    double room_height;

    // door
    cout << "Enter the length: (in feet): " << endl;
    cin >> door_length;
    cout << "Enter the width: " << endl;
    cin >> door_width;

    // Windows
    cout << "Enter the length of the window1 (in feet): " << endl;
    cin >> window_length1;
    cout << "Enter the window1 width: " << endl;
    cin >> window_length1;
    cout << "Enter the length of the window2 (in feet): " << endl;
    cin >> window_length2;
    cout << "Enter the window2 width: " << endl;
    cin >> window_width2;

    // Bookshelf
    cout << "Enter the length of the bookshelf: (in feet) " << endl;
    cin >> bookshelf_length;
    cout << "Enter the bookshelf width: " << endl;
    cin >> bookshelf_width;

    // Room dimensions
    cout <<"\nNow enter the length of the room: (in feet)" << endl;
    cin >> room_length;
    cout << "Enter the wiidth of the room: " << endl;
    cin >> room_width;
    cout << "Enter the height of the room: " << endl;
    cin >> room_height;
   
    // Areas calculation
    double windows = (window_width1 * window_length1) + (window_length2 * window_width2);
    double door_area = door_length * door_width;
    double bookshelf = bookshelf_width * bookshelf_length;
    double walls = 2 * room_height * (room_width + room_length);
    double paint = walls - (door_area + bookshelf + windows);

    cout << "Door: " << door_area << endl;
    cout << "Windows: " << windows << endl;
    cout << "Bookshelf: " << bookshelf << endl;
    cout << "Room: " << walls << endl;
    cout << "Total amount of paint needed for this room is : " << (paint / GALLON) << endl;
}
