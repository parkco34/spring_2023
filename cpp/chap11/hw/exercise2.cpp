#include <iostream>
#include "dateType.h"

using namespace std;

int main() {
    int month, day, year;
    int counter = 0;
    char q=' ';

    while(q != 'q') {
      cout << "Enter month: " << endl;
      cin >> month;
      cout << "Day: " << endl;
      cin >> day;
      cout << "Year: " << endl;
      cin >> year;

      dateType date1(month, day, year);
      cout << "Date " << counter+1 << ": ";
      date1.printDate();
      counter++;

      cout << "Continue? (press any key other than q\nq: to quit\n" << endl;
      cin >> q;
      if (q == 'q') {
          cout << "BYE BYE! ᕕ( ͡° ͜ʖ ͡°)ᕗ";
        return 0;
      }
    }
}




