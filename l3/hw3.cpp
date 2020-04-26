/*
 * hw3.cpp
 * Nicholas Schantz
 * 2020-04-21
 * 
 * Program to test functionality of SavingsAccount class.
 */

#include <iostream>

using std::cout;

#include "SavingsAccount.h"
using NickSchantz::SavingsAccount;

int main()
{
    // constructor and negative initial balance error
    SavingsAccount mySavings(1000);
    SavingsAccount yourSavings(-500);

    // getSavingsBalance
    double expectedSavings = 1000;
    cout << "Savings Balance\n\tExpected: " << expectedSavings 
        << "\n\tReported: " << mySavings.getSavingsBalance() << "\n";
    
    // set class interest rate
    double newInterest = .1;
    SavingsAccount::setAnnualInterestRate(newInterest);

    // apply monthly interest
    // should be 1083.3
    mySavings.applyMonthlyInterest();

    cout << " My savings after interest\n\tExpected: "
        << expectedSavings * (1.0 + newInterest/12.0) << "\n\t"
        "Actual: " << mySavings.getSavingsBalance() << "\n";

    return 0;
}
