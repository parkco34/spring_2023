#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    // Creating a dynamic array
    int *p;
    const int SIZE = 10; // Size of array
    p = new int[SIZE]; // Using "new", creating a dynamic array
    srand(time(0));
    
    // FIll the array
    for(int i=0; i<SIZE; i++) {
        p[i] = rand() % 73 +1;
    }

    // Print array
    for (int i=0; i< SIZE; i++) {
        cout << p[i] << " ";
    }

    delete[] p;

    return 0;
}
