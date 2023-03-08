//Series to approximate pi
//The program in main.cpp uses this series to find the approximate value of π. However, the statements are in the incorrect order, and there is also a bug in this program.
//Rearrange the statements and remove the bug so that this program can be used to approximate π.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double pi = 0;
    int i;
    long n;
    
    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl; 
    
    for (i = 0; i < n; i++)
    {
        // If EVEN number, positive.  Otherwise negative
        pi += ((i%2==0) ? 1.0 : -1.0) / (2 * i + 1);
    }
    
    pi = 4 * pi;
    cout << endl << "pi = " << pi << endl;
    return 0;
}

