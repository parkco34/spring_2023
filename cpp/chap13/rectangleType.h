#include <fstream>
using namespace std;

class rectangleType
{
    // Friend functions
    friend void rectangleFriend(rectangleType recObejct);
    
    public:
        rectangleType& doubleDimensions(); // & is for Efficiency
        void setDimension(double len, double wid);
        double getLength() const;
        double getWidth() const;
        double area() const;
        double perimeter() const;
        void print() const;

        // constructors
        rectangleType(double len=0.0, double wid=0.0);

        rectangleType& setLength(double length);
        rectangleType& setWidth(double width);

        // Overloaded member functions
        rectangleType operator+(const rectangleType& rectangle) const;
        rectangleType operator*(const rectangleType& rectangle) const;
        bool operator==(const rectangleType&) const;
        bool operator!=(const rectangleType&) const;
        bool operator<=(const rectangleType&) const;
        bool operator<(const rectangleType&) const;

        // Overloaded nonmember functions
        friend istream& operator>>(istream&, rectangleType&);
        friend ostream& operator<<(ostream&, const rectangleType&);

        // Overloading the assignment operator
        const rectangleType& operator=(const rectangleType&);
    
    private:
        double width, length;
};