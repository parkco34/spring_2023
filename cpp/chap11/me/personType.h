class personType
{
    public:
        void print() const;
        void setName(string first, string last);
        string getFirstName() const;
        string getLastName() const;
        personType(string first="", string last="");

    private:
        string firstName, lastName;
};
