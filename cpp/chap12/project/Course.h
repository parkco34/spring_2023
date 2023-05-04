#include <string>
using namespace std;

class Course
{
    private:
        int roomNum;
        double contactHours;
        string title, courseID;

    public:
        virtual void show() = 0; // Makes the class abstract
        //Accessor methods
        string getTitle() const;
        int getRoomNumber() const;
        double getContactHours();
        string getCourseID();

        // Mutator methods
        void setTitle(string& title);
        void setRoomNumber(int& roomNumber);
        void setContactHours(double& hours);
        void setCourseID(string&  id);
        
        //Constructors
};

