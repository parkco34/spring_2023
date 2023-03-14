#include <iostream>
#include <iomanip>

using namespace std;

void parity(int number)
{
    if (number % 2 == 0) {
        cout << (2 * number) << endl;
    }
    else {
        cout << (5 * number) << endl;
    }
}

void playwithranges(int num1, int num2)
{
    int counter = 0, accum = 0;
    if (num1 > num2) {
        for (int i=num2; i <= num1; i++) {
            accum += i; // sum
            counter += 1; // number of integers in range

        }
    } else {
        for (int i=num1; i<=num2; i++) {
            accum += i;
            counter += 1;
        }
    }

    cout << "for the numbers: " << num1 << " and " << num2  << "\n" << "sum: " << accum << "\naverage: " << ((double) accum/counter) << endl;
}

int main()
{
    int num1, num2, num3;
    cout << "enter two integers: " << endl;
    cin >> num1 >> num2 >> num3;

    parity(num1);
    playwithranges(num2, num3);

    return 0;
}
