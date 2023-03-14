include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDice(int num);

int main()
{
    int num;
    char playAgain;
    srand(time(0));

    do
    {
        cout << "Enter the sum of the numbers to be rolled: ";
        cin >> num;

        cout << "The number of times the dice are rolled to get the sum " << num << " = " << rollDice(num) << endl;
        cout << "Do you want to roll again? (Y/N): " ;
        cin >> playAgain;
    } while (playAgain == 'Y' || playAgain == 'y');

    return 0;
}

int rollDice(int num)
{
    int die1, die2, sum, rollCount = 0;
    do
    {
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        sum = die1 + die2;
        rollCount++;
    } while (sum != num);

    return rollCount;
}
