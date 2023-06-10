#include "personType.h"
#include <string>

class partTimeEmployee: public personType
{
    public:
        void print() const;
        double calculatePay() const;
        void setNameRateHours(string first, string last, double rate, double hours);
        partTimeEmployee(string first="", string last="", double rate=0, double hours=0);

    private:
        double payRate, hoursWorked;
}
