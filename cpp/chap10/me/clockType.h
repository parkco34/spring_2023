class clockType
{
    public:
        // Mutator methods
        void setTime(int, int, int);
        // Const at the end signifies that member functions cannot modify the member variables of type clockType
        void incrementSeconds();
        void incrementMinutes();
        void incrementHours();
        // otherClock& is the reference to a clockType object
        // const indicates that the function will not modify otherClock
        // const at the end of the function means this member function does not modify any of the data members of the class
        bool equalTime(const clockType&) const;
        void setHour(int);
        void setMinute(int);
        void setSecond(int);
        // Accessor methods
        void getTime(int&, int&, int&) const;
        void printTime() const;
        int elaspedSeconds() const;
        int remainingSeconds() const;
        void clockDifference(const clockType&, const clockType&) const;

    private:
        int hr;
        int min;
        int sec;
};
