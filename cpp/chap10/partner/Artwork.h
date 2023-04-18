#include <string>
using namespace std;

class Artwork
{
    string artist, title;
    int artworkId, ownerId, bidderId; // will hold the ID number of the bidder who has the current highest bid. 
    double minBid, bid, currentHiBid;

    public:
        // Constructors
        Artwork(int artworkId, int ownerId);
        Artwork(int arworkId, int ownerId, const string& artist, const string& title, double minBid);

    // Accessors
    string getArtist() const;
    string getTitle() const;
    double getMinBid() const;
   
    // Mutator methods
    void setArtist(const string& artist);
    void setTitle(const string& title);
    void setMinBid(double minBid);

    // Member function to make bid
    bool makeBid(double bid, int bidderId);
    void show() const;
};
