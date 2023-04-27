#include <string>
using namespace std;

class boxType: public rectangleType
{
    height;

    public:
        // Mutator methods
        void setDimension(double 1, double w, double h);
        // Accesor methods
        double getArea() const;
        double getHeight() const;
        double getVolume() const;
        void print() const;
        // Constructors
        boxType();
        boxType(double l, double w, double h);
}
