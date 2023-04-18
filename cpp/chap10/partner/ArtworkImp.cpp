#include <iostream>
#include <iomanip>
#include "Artwork.h"
using namespace std;

Artwork::Artwork(int artworkId, int ownerId)
{
    this->artworkId = artworkId;
    this->ownerId = ownerId;
    artist = "";
    title = "";
    minBid = 0;
    bid = 0;
    bidderId = 0;
}

Artwork::Artwork(int artworkId, int ownerId, const string& artist, const string& title, double minBid)
{
    this->artworkId = artworkId;
    this->ownerId = ownerId;
    this->artist = artist;
    this->title = title;
    this->minBid = minBid;
    bid = 0;
    bidderId = 0;
}

string Artwork::getArtist() const
{
    return artist;
}

string Artwork::getTitle() const
{
    return title;
}

double Artwork::getMinBid() const
{
    return minBid;
}

void Artwork::setArtist(const string& artist)
{
    this->artist = artist;
}

void Artwork::setTitle(const string& title)
{
    this->title = title;
}

void Artwork::setMinBid(double minBid)
{
    this->minBid = minBid;
}

bool Artwork::makeBid(double bid, int bidderId)
{
    // 
    if (bid >= minBid && bid > currentHiBid)  {
        currentHiBid = bid;
        this->bidderId = bidderId;
        return true;
    }
    return false;
}

void Artwork::show() const 
{
    cout << fixed << setprecision(2);
    cout << "Artwork ID: " << artworkId << endl;
    cout << "Owner ID: " << ownerId << endl;
    cout << "Artist: " << artist << endl;
    cout << "Title: " << title << endl;
    cout << "Minimum Bid: $" << minBid << endl;
    cout << "Current High Bid: $" << currentHiBid << endl;
    cout << "Bidder ID: " << bidderId << endl;
}
