#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Search and replace function
string search_replace(string input, string search, string replace) {
    string output = input;
    size_t pos = output.find(search);
    while (pos != string::npos) {
        output.replace(pos, search.length(), replace);
        pos = output.find(search, pos + replace.length());
    }
    return output;
}

int main() {
    // Open input and output files
    ifstream input_file("input.txt");
    ofstream output_file("output.txt");
    
    // Check if input file was opened successfully
    if (!input_file) {
        cerr << "Error opening input file." << endl;
        return 1;
    }
    
    // Check if output file was opened successfully
    if (!output_file) {
        cerr << "Error opening output file." << endl;
        return 1;
    }
    
    // Read input file line by line and perform search and replace
    string line;
    while (getline(input_file, line)) {
        line = search_replace(line, "apparant", "apparent");
        line = search_replace(line, "greatful", "grateful");
        line = search_replace(line, "medievel", "medieval");
        line = search_replace(line, "seperate", "separate");
        line = search_replace(line, "wierd", "weird");
        output_file << line << endl;
    }
    
    // Close files
    input_file.close();
    output_file.close();
    
    return 0;
}

