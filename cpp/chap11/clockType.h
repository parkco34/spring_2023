#include <iostream>
#include <string>
using namespace std;

class clockType
{
    protected:
        int hr, min, sec;

    public:
        // Accessor methods
        void getTime(int&, int&, int&) const;
        void printTime() const;

        // Mutator methods
        void setTime(int, int, int);
        void incrementHours();
        void incrementMinutes();
        void incrementSeconds();
        
        bool equalTime(const clockType& otherClock) const;

        // Constructors
        clockType();
        clockType(int, int, int);
};
