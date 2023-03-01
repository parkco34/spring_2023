//Voter Tally Citizens in a nearby county recently voted whether or not to approve a bond referendum to finance the construction of a new school.
//The first six results of that vote are contained in the file votes.dat.
//Write a program that reads the file votes.dat. The program should summarize the voting data to include a total tally of “yes” and “no” votes as well as a break-down of votes based on the voter’s district
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    int district1_yup = 0;
    int district2_yup = 0;
    int district3_yup = 0;
    int district1_nope = 0;
    int district2_nope = 0;
    int district3_nope = 0;
    int yay = 0;
    int nay = 0;
    int district;
    char vote;

    // Input Streams
    ifstream inputFile("votes.dat");
    if (!inputFile) {
        cerr << "Sorry, something went wrong" << endl;
        return 1;
    }

    // Reading file line by line
    while (inputFile >> district >> vote) {
        if (vote == 'Y') {
            yay++;

            switch(district) {
                case 1:
                    district1_yup++;
                    break;

                case 2:
                    district2_yup++;
                    break;

                case 3:
                    district3_yup++;
                    break;
            }
        }
        else if (vote == 'N') {
            nay++;

            switch(district) {
                case 1:
                    district1_nope++;
                    break;

                case 2:
                    district2_nope++;
                    break;

                case 3:
                    district3_nope++;
                    break;
            }
        }
    }

    inputFile.close();

    // Outputting results
    cout << "Total votes for Yes: " << yay << endl;
    cout << "Total votes for No: " << nay << endl;
    cout << "District 1 - Yes: " << district1_yup << " No: " << district1_nope << endl;
    cout << "District 2 - Yes: " << district2_yup << " No: " << district2_nope << endl;
    cout << "District 3 - Yes: " << district3_yup << " No: " << district3_nope << endl;

    return 0;
}



