#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string input_filename;
    cout << "Enter the input filename: ";
    cin >> input_filename;

    ifstream input_file;
    ofstream output_file;
    input_file.open(input_filename);
    output_file.open("Ch3_Ex5Output.dat");

    string first_name, last_name;
    double current_salary, pay_increase;
    while (input_file >> last_name >> first_name >> current_salary >> pay_increase) {
        double updated_salary = current_salary * (1 + pay_increase/100);
        output_file << fixed << setprecision(2) << first_name << " " << last_name << " " << updated_salary << endl;
    }

    input_file.close();
    output_file.close();

    return 0;
}
//    if (!output_file.is_open()) {
//        cerr << "Error: could not open output file." << endl;
//        return 1;
//    }

//    if (!input_file.is_open()) {
//        cerr << "Error: could not open input file." << endl;
//        return 1;
//    }

