// Red
#include <iostream>
#include <fstream>

using namespace std;

const int MAX_NUMBERS = 1000;

int getNumber(ifstream& inputFile, ofstream& outputFile);
void printResult(int posCount, int negCount, int zeroCount, int sum);

int main()
{
    int posCount = 0, negCount = 0, zeroCount = 0, sum = 0, count = 0;
    double average = 0.0;
    int number;

    ifstream inputFile("Ch6_Ex20Data.txt");
    ofstream outputFile("Ch6_Ex20Out.txt");

    while ((count < MAX_NUMBERS) && (inputFile >> number))
    {
        outputFile << number << " ";
        count++;
        if (count % 10 == 0)
        {
            outputFile << endl;
        }

        if (number > 0)
        {
            posCount++;
        }
        else if (number < 0)
        {
            negCount++;
        }
        else
        {
            zeroCount++;
        }

        sum += number;
    }

    if (count == 0)
    {
        outputFile << "No numbers found in input file." << endl;
    }
    else
    {
        average = static_cast<double>(sum) / count;
        printResult(posCount, negCount, zeroCount, sum);
        outputFile << endl << "The sum of numbers = " << sum << endl;
        outputFile << "The average is " << average << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}

int getNumber(ifstream& inputFile, ofstream& outputFile)
{
    int number;
    inputFile >> number;
    outputFile << number << " ";
    return number;
}

void printResult(int posCount, int negCount, int zeroCount, int sum)
{
    cout << "Number of positive numbers: " << posCount << endl;
    cout << "Number of negative numbers: " << negCount << endl;
    cout << "Number of zeros: " << zeroCount << endl;
}

