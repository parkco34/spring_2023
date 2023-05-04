#include "Course.h"
#include <string>
using namespace std;

// Constructors
//Course::Course() 
//{
//    roomNum = 0;
//    contactHours = 0.0;
//    title = "N/A";
//    courseID = "N/A";
//}
//
//Course::Course(int roomNum, double contactHours, 
//        string& title, string& courseID)
//{
//    this->roomNum;
//    this->contactHours;
//    this->title;
//    this->courseID;
//}

// Accesor methods
string Course::getTitle() const
{
    return title;
}

int Course::getRoomNumber() const
{
    return roomNum;
}

double Course::getContactHours()
{
    return contactHours;
}

string Course::getCourseID()
{
     return courseID;
}

// Mutator methods
void Course::setTitle(string& theTitle)
{
    title = theTitle;
}

void Course::setRoomNumber(int& roomNumber)
{
    roomNum = roomNumber;
}

void Course::setContactHours(double& hours)
{
    contactHours = hours;
}

void Course::setCourseID(string& id)
{
    courseID = id;
}
