/* Prompts user to specify the amount of premixed concrete (in cubic yards) ordered, 
 * the thickness of the patio (inches), 
 * and the ratio of length and width of the patio (in feet), 
 *  where 1 cubic yard = 27 cubic feet 
 Program returns the length and width of the patio...
------------------------------------------------------------
V = L X W X H, where L=length, w=width, H=height, and
L = V / (W x H) and
W = V / (L x H)...
L/W = V / (W^2 x H)
 */
#include <iostream>

using namespace std;


float sqrt(int radicand)
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

    cout << "Mid is: " << mid << " and the radicand is " << radicand << endl;
    return 0.0;
}

int main()
{
    int mix_cbyrd;
    double thickness;
    double lw_ratio;

    double width = sqrt(mix_cbyrd / thickness * lw_ratio);
    double length = sqrt(mix_cbyrd * lw_ratio / thickness);

    cout << "Enter the amount of concrete mix you wish to purchase (in cubic yards: 1 cbyrd = 27 cubic feet)\n";
    cin >> mix_cbyrd;
    cout << "\nEnter the thickness of the patio: \n";
    cin >> thickness;
    double height = thickness / 12; // Height in feet
    cout << "\nEnter Ratio of the length and with: \n";
    cin >> lw_ratio;

    cout << "\nThe length is " << sqrt(mix_cbyrd / height * lw_ratio)<< "\nThe width is " << sqrt(mix_cbyrd * lw_ratio / height)<< "." << endl;
    return 0;
}
