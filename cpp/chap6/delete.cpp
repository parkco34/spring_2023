#include <iostream>

using namespace std;

int main()
{
    int n = 0, i = 73;
    int *p = &n, *q = &i;
    cout << "*p = "<< *p << "\n*q = " << *q << endl;
    *p = 73;
    cout << "*p = " << *p << endl;

}

