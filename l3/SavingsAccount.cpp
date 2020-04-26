/* 
 * SavingsAccount.cpp
 * Nicholas Schantz
 * 2020-04-21
 * 
 */

#include <iostream>

#include "SavingsAccount.h"

using std::cerr;
using namespace NickSchantz;

double NickSchantz::SavingsAccount::annualInterestRate;

// constructor
NickSchantz::SavingsAccount::SavingsAccount(double initialBalance)
{
    // ensure balance is non negative
    if (initialBalance < 0) {
        cerr << "Initial balance must be non-negative\n";
        savingsBalance = 0.0;
    } else {
        savingsBalance = initialBalance;
    }

}

double
NickSchantz::SavingsAccount::getSavingsBalance() const
{
    return savingsBalance;
}

void
NickSchantz::SavingsAccount::setAnnualInterestRate(double newInterestRate)
{
    // ensure interest rate is non-negative
    if (newInterestRate < 0) {
        cerr << "Interest rate must be non-negative\n";
        NickSchantz::SavingsAccount::annualInterestRate = 0.0;
    } else {
        NickSchantz::SavingsAccount::annualInterestRate = newInterestRate;
    }
}

void
NickSchantz::SavingsAccount::applyMonthlyInterest()
{
    double monthlyInterestRate = NickSchantz::SavingsAccount::annualInterestRate / 12.0;
    savingsBalance *= (1.0 + monthlyInterestRate);
}
