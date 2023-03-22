#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string convertName(string name) {
    // Find the index of the comma
    size_t commaIndex = name.find(',');

    // Extract the firstName, middleName, and lastName
    string firstName = name.substr(commaIndex + 2);
    string middleName = "";
    string lastName = name.substr(0, commaIndex);

    size_t spaceIndex = firstName.find(' ');
    if (spaceIndex != string::npos) {
        middleName = firstName.substr(spaceIndex + 1);
        firstName = firstName.substr(0, spaceIndex);
    }

    // Construct the new name
    string newName = firstName + " " + middleName;
    if (middleName == "") {
      return newName + lastName;
    }
    else {
      return newName + " " + lastName;
    }
}

int main() {
    // Open the input file
    ifstream inFile("Ch7_Ex9Data.txt");

    if (!inFile) {
        cerr << "Error: unable to open input file." << endl;
        return 1;
    }

    // Read each line from the input file and convert the name
    string line;
    while (getline(inFile, line)) {
        string convertedName = convertName(line);
        cout << convertedName << endl;
    }

    // Close the input file
    inFile.close();

    return 0;
}

