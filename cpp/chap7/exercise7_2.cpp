// ===============================================================
// 1)  first option, the author is paid $5,000 upon delivery of the final manuscript and $20,000 when the novel is published.
//
// 2) The author is paid 12.5% of the net price of the novel for each copy of the novel sold. 
//
// 3) the author is paid 10% of the net price for the first 4,000 copies sold, and 14% of the net price for the copies sold over 4,000
// ===============================================================
// EXAMPLE:
// 123456789
// 50
// OUTPUT NEEDED for option3:
//      Royalty option3: 864189523.00
// ===============================================================
#include <iostream>
#include <iomanip>

using namespace std;

namespace royaltyRates {
    const double OPTION1_DELIVERY = 5e3;
    const double OPTION1_FINAL = 20e3;
    const double OPTION2 = 0.125;
    const double FOURK = 4000;
    const double OPTION3_BELOW_FOURK = 0.10;
    const double OPTION3_ABOVE_FOURK = 0.125;
}

int main()
{
    double netPrice, option1, option2, option3;
    int estimatedCopies;
    
    cout << fixed << setprecision(2);
    cout << "Enter the net price for your shitty book: " << endl;
    cin >> netPrice;
    cout << "Enter the estimated number of copies to sell: " << endl;
    cin >> estimatedCopies;
    
    // First option
    option1 = royaltyRates::OPTION1_DELIVERY + royaltyRates::OPTION1_FINAL;
    cout << "Royalty option1: " << option1 << endl;
    
    // Option 2
    option2 = royaltyRates::OPTION2 * netPrice * estimatedCopies;
    cout << "Royalty option2: " << option2 << endl;

    // Option 3
    if (estimatedCopies > 4000) {
        option3 = royaltyRates::OPTION3_ABOVE_FOURK * netPrice * (estimatedCopies - 4000) 
            + royaltyRates::FOURK * netPrice * royaltyRates::OPTION3_BELOW_FOURK;
        cout << "Royalty option3: " << option3 << endl; 
    }
    else {
        option3 = royaltyRates::OPTION3_BELOW_FOURK * netPrice * estimatedCopies;
        cout << "Royalty option3: " << option3 << endl;
    }

    // Compare options to see which is best
    if (option1 > option2 && option1 > option3) {
        cout << "option1 is best" << endl;
    }
    else if (option2 > option1 && option2 > option3) {
        cout << "option2 is best" << endl;
    }
    else {
        cout << "option3 is best" << endl;
    }

    return 0;
}
