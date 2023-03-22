#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream input_file("localPharm.txt");
    if (!input_file) {
        cout << "Error: could not open file" << endl;
        return 1;
    }
    
    string code, description;
    double cost;
    
    while (input_file >> code >> description >> cost) {
        cout << code << " " << description << " " << cost;
        
        if (code[0] == 'C' || code[0] == 'D' || code[0] == 'H') {
            cout << " Qualified Expense";
        }
        
        cout << endl;
    }
    
    input_file.close();
    
    return 0;
}

