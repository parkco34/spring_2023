// ================================================================================
// The publisher is offering three options. 
// In the first option, the author is paid $5,000 upon delivery of the final manuscript 
//  and $20,000 when the novel is published. 
//
// In the second option, the author is paid 12.5% of the net price of the novel 
// for each copy of the novel sold. 
//
// In the third option, the author is paid 10% of the net 
// price for the first 4,000 copies sold, and 14% of the net price for the copies sold over 
// 4,000. 
// The author has some idea about the number of copies that will be sold and would 
// like to have an estimate of the royalties generated under each option.
// ================================================================================
#include <iostream>
#include <iomanip>

using namespace std;

namespace royaltyRates {
    const double OPTION1_FIXED_DELIVERED = 5000.00;
    const double OPTION1_FIXED_PUBLISHED = 20000.0;
    const double OPTION2_RATE_EACH = 0.125;
    const double OPTION3_RATE_FIRST_FOURK = 0.10;
    const double OPTION3_RATE_OVER_FOURK = 0.14;
    const int OPTION3_THRESHOLD = 4000;
}

int main()
{
    double netPrice;
    int estimatedCopies;

    cout << "Enter the net price for each copy of your shitty novel: " << endl;
    cin >> netPrice;
    cout << "Enter the estimated number of copies you think will be sold: " << endl;
    cin >> estimatedCopies;

    // Option1
    double option1 = royaltyRates::OPTION1_FIXED_DELIVERED + royaltyRates::OPTION1_FIXED_PUBLISHED;
    cout << "Royalty option1: " << fixed << setprecision(2) << option1 << endl;

    // OPtion2
    double option2 = netPrice * royaltyRates::OPTION2_RATE_EACH * estimatedCopies;
    cout << "Royalty option2: " << fixed << setprecision(2) << option2 << endl;

    // Option3
    double option3;
    if (estimatedCopies > royaltyRates::OPTION3_THRESHOLD) {
        option3 = royaltyRates::OPTION3_RATE_OVER_FOURK * netPrice * (estimatedCopies - royaltyRates::OPTION3_THRESHOLD)
            + royaltyRates::OPTION3_RATE_FIRST_FOURK * netPrice * royaltyRates::OPTION3_THRESHOLD;
    }
    else {
        option3 = estimatedCopies * netPrice * royaltyRates::OPTION3_RATE_FIRST_FOURK;
    }
    cout << "Royalty option3: " << fixed << setprecision(2) << option3 << endl;

    // Determine best option
    if (option1 >= option2 && option1 >= option3) {
        cout << "Option1 is best" << endl;
    }
    else if(option2 >= option3 >= option1) {
        cout << "Option2 is best" << endl;
    }
    else {
        cout << "Option3 is best" << endl;
    }
    return 0;
}
