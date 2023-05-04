#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int numOfCandidates;
    
    cout << "Enter the number of candidates: ";
    cin >> numOfCandidates;

    string* candidates = new string[numOfCandidates];
    int* votes = new int[numOfCandidates];
    double* votePercentage = new double[numOfCandidates];
    int totalVotes = 0;
    int winnerIndex = 0;

    for (int i = 0; i < numOfCandidates; i++) {
        cout << "Enter candidate " << i + 1 << " name: ";
        cin >> candidates[i];
        cout << "Enter the number of votes for " << candidates[i] << ": ";
        cin >> votes[i];
        totalVotes += votes[i];
    }

    for (int i = 0; i < numOfCandidates; i++) {
        votePercentage[i] = (static_cast<double>(votes[i]) / totalVotes) * 100;
        if (votes[i] > votes[winnerIndex]) {
            winnerIndex = i;
        }
    }

    cout << endl;
    cout << "Candidate\tVotes Received\t% of Total Votes" << endl;
    for (int i = 0; i < numOfCandidates; i++) {
        cout << candidates[i] << "\t\t" << votes[i] << "\t\t" << fixed << setprecision(2) << votePercentage[i] << endl;
    }

    cout << "Total\t\t" << totalVotes << endl;
    cout << "The Winner of the Election is " << candidates[winnerIndex] << endl;

    delete[] candidates;
    delete[] votes;
    delete[] votePercentage;

    return 0;
}

