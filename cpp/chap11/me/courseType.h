class courseType
{
    public:
        // Function to set course information
        void setCourseInfo(string cName, string cNo, int credits);
        void print(ostream& outF);
        int getCredits() const;
        string getCourseNumber() const;
        // Constructor
        courseType(string cName="", string cNo="", int credits=0);
    
    private:
        string courseName, courseNo;
        int courseCredits;
}
