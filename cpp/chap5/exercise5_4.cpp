//Write a program that prompts the user to enter a telephone number expressed
//in letters and outputs the corresponding telephone number in digits.
//
// EXAMPLE:
//  GET LOAN = 438-5626
//  Cool code = 266-5263
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int counter = 0, num = 0;
    char sentinel;
    string input;
    cout << "Enter Y/y to convert a telephone number from letters to digits: " << endl;
    cin >> sentinel;

    while (sentinel == 'Y' || sentinel == 'y') {
        cout << "Enter a telephone number using letters: " << endl;
        cin.ignore();   // Ignore newline character
        getline(cin, input);
        cout << "\nThe corresponding telephone number is: " << endl;

        for (int i = 0; i<input.length() && counter<7; i++) {

            if (i == 3)
                cout << "-";

            if (input[i] == 'A' || input[i] == 'B' || input[i] == 'C' ||
                    input[i] == 'a' || input[i] == 'b' || input[i] == 'c') {
                num = 2;
                counter++;
            }

            else if (input[i] == 'D' || input[i] == 'E' || input[i] == 'F' ||
                    input[i] == 'd' || input[i] == 'e' || input[i] == 'f') {
                num = 3;
                counter++;
            }

            else if (input[i] == 'G' || input[i] == 'H' || input[i] == 'I' ||
                    input[i] == 'g' || input[i] == 'h' || input[i] == 'i') {
                num = 4;
                counter++;
            }

            else if (input[i] == 'J' || input[i] == 'K' || input[i] == 'L' ||
                    input[i] == 'j' || input[i] == 'k' || input[i] == 'l') {
                num = 5;
                counter++;
            }

            else if (input[i] == 'M' || input[i] == 'N' || input[i] == 'O' ||
                    input[i] == 'm' || input[i] == 'n' || input[i] == 'o') {
                num = 6;
                counter++;
            }

            else if (input[i] == 'P' || input[i] == 'Q' || input[i] == 'R' || input[i] == 'S' ||
                    input[i] == 'p' || input[i] == 'q' || input[i] == 'r' || input[i] == 's') {
                num = 7;
                counter++;
            }

            else if (input[i] == 'T' || input[i] == 'U' || input[i] == 'V' ||
                    input[i] == 't' || input[i] == 'u' || input[i] == 'v') {
                num = 8;
                counter++;
            }

            else if (input[i] == 'W' || input[i] == 'X' || input[i] == 'Y' || input[i] == 'Z' ||
                    input[i] == 'w' || input[i] == 'x' || input[i] == 'y' || input[i] == 'z') {
                num = 9;
                counter++;
            }

            cout << num;
        }

        cout << endl;
        cout << "Enter any other letter to terminate the program." << endl;
        cin >> sentinel;
    }

    cout << endl;
    return 0;
}

// CORRECT CODE:
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    char sentinel;
//    do {
//        cout << "Enter Y/y to convert a telephone number from letters to digits." << endl;
//        cout << "Enter any other letter to terminate the program." << endl;
//        cin >> sentinel;
//
//        if (sentinel != 'Y' && sentinel != 'y') {
//            break;
//        }
//
//        cout << "Enter a telephone number using letters: " << endl;
//        cin.ignore();  // to ignore the newline character
//        string input;
//        getline(cin, input);
//
//        string output = "";
//        int count = 0;
//        for (int i = 0; i < input.length() && count < 7; i++) {
//            if (input[i] == ' ' || input[i] == '-') {
//                continue;
//            }
//            if (input[i] >= 'a' && input[i] <= 'c' || input[i] >= 'A' && input[i] <= 'C') {
//                output += "2";
//            } else if (input[i] >= 'd' && input[i] <= 'f' || input[i] >= 'D' && input[i] <= 'F') {
//                output += "3";
//            } else if (input[i] >= 'g' && input[i] <= 'i' || input[i] >= 'G' && input[i] <= 'I') {
//                output += "4";
//            } else if (input[i] >= 'j' && input[i] <= 'l' || input[i] >= 'J' && input[i] <= 'L') {
//                output += "5";
//            } else if (input[i] >= 'm' && input[i] <= 'o' || input[i] >= 'M' && input[i] <= 'O') {
//                output += "6";
//            } else if (input[i] >= 'p' && input[i] <= 's' || input[i] >= 'P' && input[i] <= 'S') {
//                output += "7";
//            } else if (input[i] >= 't' && input[i] <= 'v' || input[i] >= 'T' && input[i] <= 'V') {
//                output += "8";
//            } else if (input[i] >= 'w' && input[i] <= 'z' || input[i] >= 'W' && input[i] <= 'Z') {
//                output += "9";
//            }
//            count++;
//            if (count == 3) {
//                output += "-";
//            }
//        }
//
//        cout << "\nThe corresponding telephone number is: " << output << endl;
//    } while (true);
//
//    return 0;
//}
//
