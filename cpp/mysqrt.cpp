#include <iostream>

using namespace std;

float mysqrt(int radicand)
{
    // ************************************************
    // Taken from G4G:
    // ************************************************
    int start = 0;
    int end = radicand;
    int mid;
    
    // Stores answer
    float ans;

    // Finding integral part of square root of radicand
    while (start <= end) {
        // Ifnd mid
        mid = (start + end) / 2;
        
        // if radicand is perfext square, break
        if (mid*mid == radicand) {
            ans = mid;
            break;
        }
        
        // INcrement start if integral part lies on right
        // side of mid
        if (mid * mid < radicand) {
            // Add start value to answer
            ans = start;
            start = mid + 1;
        }
        
        else {

            // Decrement end if integral part lies on the left of mid
            end = mid - 1;
        }
    }

    // Finding the fractional part of sqrt to five decimal places
    float increment = 0.1;
    for (int i=0; i < 5; i++) {
        while (ans * ans <= radicand) {
            ans += increment;
        }

        ans = ans - increment;
        increment = increment / 10;
    }

    return ans;
}

int main()
{
    int root = 36;
    cout << "\nMy square root is: " << mysqrt(root) << ".\n";

    return 0;
}
