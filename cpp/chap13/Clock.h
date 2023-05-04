// Member variables (PRIVATE to the class and cannot be accessed outside of the class)
// 1. int hr
// 2. int min
// 3. int sec
//
// Member functions (PUBLIC and can be directly accessed outside the class. They can also directly access the member variables (hr, min, and sec))
// 1. Set the time.
// 2. Retrieve the time.
// 3. Print the time.
// 4. Increment the time by one second.
// 5. Increment the time by one minute.
// 6. Increment the time by one hour.
// 7. Compare the two times for equality
class Clock
{
    public:
        void setTime(int, int, int);
        void getTime(int&, int&, int&) const; // const specifies that these functions cannot modify the member variables of a variable of type
        void printTime() const; 
        void incrementSeconds();
        void incrementMinutes();
        void incrementHours();
        bool equalTime(const Clock& otherClock) const; // formal parameter receives the address of the actual parameter, but the formal parameter cannot modify the value of the actual parameter
        
        // Constructors
        Clock();
        Clock(int, int, int);
        
    private:
        int hr;
        int min;
        int sec;
};


