/*
 * Class for Objects that store the following information:
 *  - Artwork ID code (4-digit), assigned to each piece of art
 *  - owner ID code (4-digit) assigned to owner-client, where each owner can have more than on eartwork piece up for auction
 *  - Name of the artist
 *  - Title for the artwork
 *  - Minimum Bid and current high bid for artwork
 *  - Bidder ID code (4-digit) 
 *
 * Need a member to hold ID number for highest bidder
 * Two contructors, One constructor requires the artwork id and owner id to be stored to the object. Artist and title should be initialized to empty strings. Minimum bid, current high bid, and bidder id should be initialized to 0. The second constructor requires all members except for current high bid and bidder id to be sent to the object and stored. Current high bid and bidder id should be initialized to 0. 
 */
#include <iostream>
#include <iomanip>
#include "Artwork.h"

using namespace std;

int main() {
    // Create artwork object for item with ID 1254 and owner ID 5021
    Artwork item1(1254, 5021);
    cout << "Item 1:" << endl;
    item1.show();

    // Create artwork object for item with ID 6373 and owner ID 1001
    Artwork item2(6373, 1001, "Andrea Milna", "Spring Day", 75000);
    cout << endl << "Item 2:" << endl;
    item2.show();

    // Modify item1
    item1.setArtist("Carl Patray");
    item1.setTitle("Afternoon Breeze");
    item1.setMinBid(35500);
    cout << endl << "Modified item 1:" << endl;
    item1.show();

    // Make bid on item1
    bool success = item1.makeBid(50000, 1234);
    cout << endl << "Bid on item 1: $" << 50000 << ", bidder ID: 1234" << endl;
    if (success) {
        cout << "Bid successful." << endl;
        item1.show();
    } else {
        cout << "Bid unsuccessful." << endl;
    }

    // Make bid on item2
    success = item2.makeBid(41250, 5678);
    cout << endl << "Bid on item 2: $" << 41250 << ", bidder ID: 5678" << endl;
    if (success) {
        cout << "Bid successful." << endl;
        item2.show();
    } else {
        cout << "Bid unsuccessful." << endl;
    }

    return 0;
}

