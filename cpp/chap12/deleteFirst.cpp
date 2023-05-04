#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x = 25;
    int* p;
    p = &x;
    *p = 46;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "x = " << x << endl;
}
