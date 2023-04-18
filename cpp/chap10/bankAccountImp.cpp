#include <iostream>
#include <iomanip>
#include <string>
#include "bankAccount.h"

using namespace std;

int bankAccount::nextAccountNum = 1000;

bankAccount::bankAccount()
{
    name = "";
    accountType = "";
    accountNum = nextAccountNum;
    nextAccountNum++;
    balance = 0.00;
    interest = 0.0;
}

bankAccount::bankAccount(const string& name, double balance, double interest)
{
    this->name = name;
    this->accountNum = nextAccountNum;
    nextAccountNum++;
    this->balance = balance;
    this->interest = interest;
}

// Accessor methods
void bankAccount::printAccountInfo() const
{
    cout << fixed << setprecision(2);
    cout << "Account Holder Name: " << name << endl;
    cout << "Account Type: " << accountType << endl;
    cout << "Account Number: " << accountNum << endl;
    cout << "Balance: $" << balance << endl;
    cout << "Interest Rate: " << interest << endl;
    cout << "*****************************" << endl;
}

double bankAccount::getBalance() const
{
    return balance;
}

string bankAccount::getAccountType() const
{
    return accountType;
}

string bankAccount::getName() const
{
    return name;
}

int bankAccount::getAccountNum() const
{
    return accountNum;
}

// Mutator methods
void bankAccount::setName(const string &name)
{
    this->name = name;
}

void bankAccount::setDeposit(double amount)
{
    balance += amount;
}

void bankAccount::setAccountType(const string& accountType)
{
    this->accountType = accountType;
}

void bankAccount::setInterest(double interest)
{
    this->interest = interest;
}

void bankAccount::setWithdraw(double amount)
{
    if (amount > balance) {
        cout << "Insufficient balance ... " << endl;
        cout << "Transaction Canceled" << endl;
    }
    else {
        balance -= amount;
    }
}

