#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int calculateTotal(int votes[]);
int findMax(int votes[]);

int main(void)
{
    // Declaring required arrays
    int votes[5];
    string name[5];
    float percent[5];
    int totalVotes, winnerIndex;

    // Asking the user to enter names of the candidates and number of votes
    cout << "Enter the names of candidates in local election and number of votes:" << endl;
    for(int i=0;i<5;i++)
    {
        cin >> name[i];
        cin >> votes[i];
    }

    // Calculate total votes
    totalVotes = calculateTotal(votes);

    // Calculate percentage of each candidate
    for(int i=0; i<5; i++)
    {
        percent[i] = (votes[i]/(float)totalVotes)*100;
    }

    // Print the output
    cout << "Candidate" << '\t' << "Votes Received" << '\t' << "% of Total Votes" << endl;
    cout << fixed << setprecision(2);
    for(int i=0; i<5; i++)
    {
        cout << name[i] << '\t' << '\t' << '\t' << votes[i] << '\t' << '\t' << percent[i] << endl;
    }

    // Print the total votes
    cout << "Total: " << totalVotes << endl;

    // Find the winner of the election
    winnerIndex = findMax(votes);

    // Print the winner of the election
    cout << "Winner of the election is " << name[winnerIndex] << endl;

    return 0;
}

// Function to calculate the total votes
int calculateTotal(int votes[])
{
    int total = 0;
    for(int i=0; i<5; i++)
    {
        total += votes[i];
    }
    return total;
}

// Function to find the index of the candidate with maximum votes
int findMax(int votes[])
{
    int maxIndex = 0;
    for(int i=1; i<5; i++)
    {
        if(votes[i] > votes[maxIndex])
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

