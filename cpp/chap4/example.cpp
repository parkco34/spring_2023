#include <iostream>

using namespace std;

int main()
{
    bool bool1 = !(!36);
    bool bool2 = !(!true);

    cout << "!(!36) = " << !(!36) << endl;
    cout << "!(!true) = " << !(!true) << endl;
    cout << "bool1 = !(!36) = " << bool1 << endl;
    cout << "bool2 = !(!true) = " << bool2 << endl;
}
