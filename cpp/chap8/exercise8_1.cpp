#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int SIZE = 50;
    double alpha[SIZE];

    for (int i=0; i < SIZE; i++) {
        if (i < (SIZE / 2)) {
            alpha[i] = pow(i, 2);
            cout << alpha[i];
        }
        else {
            alpha[i] = 3 * i;
            cout << alpha[i];
        }
    }
    
    return 0;
}
