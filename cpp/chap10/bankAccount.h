#include <string>
using namespace std;

class bankAccount
{ 
    string name, accountType;
    int accountNum;
    static int nextAccountNum;
    double balance, interest;

    public:
        // Constructors
        bankAccount();
        bankAccount(const string& name, double balance, double interest);

        // Accessor methods
        void printAccountInfo() const;
        double getBalance() const;
        string getAccountType() const;
        string getName() const;
        int getAccountNum() const;

        // Mutator methods
        void setName(const string& name); // Strings are longer and thus it's more efficient to pass by reference
        void setDeposit(double amount);
        void setAccountType(const string& accountType);
        void setWithdraw(double amount);
        void setInterest(double interest);
};
        

