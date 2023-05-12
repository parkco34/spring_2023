#include <iostream>

class Vector {
public:
    int x;
    int y;

    Vector() : x(0), y(0) {}
    Vector(int x, int y) : x(x), y(y) {}

    // Overloading the addition operator (+)
    Vector operator+(const Vector& other) {
        Vector result;
        result.x = this->x + other.x;
        result.y = this->y + other.y;
        return result;
    }
};

int main() {
    Vector v1(2, 3);
    Vector v2(4, 5);

    Vector sum = v1 + v2;

    std::cout << "Sum: (" << sum.x << ", " << sum.y << ")" << std::endl;

    return 0;
}

