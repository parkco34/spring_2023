#include <string>

using namespace std;

class romanType
{
    public:
        romanType(const string& roman); // Constructor
        int toInt() const;
        void printRoman() const;
        void printInt() const;

    private:
        string romanNum;
        int intNum;
        int romanToDecimal(char r) const;
};

