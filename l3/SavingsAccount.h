/*
 * SavingsAccount.h
 * Nicholas Schantz
 * 2020-04-21 
 * 
 * Define SavingsAccount class to represent savings account at a bank.
 * The class will track the account's balance and annual interest rate that
 * applies to all accounts.
 */

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUTN_H

namespace NickSchantz {
    class SavingsAccount
    {
        private:
            double savingsBalance, annualInterestRate;
    
        public:
            // paramaterized constructor
            SavingsAccount(double initialBalance);
    
            // getter
            double getSavingsBalance() const;
    
            // setter
            void applyMonthlyInterest();
            static void setAnnualInterestRate(double newInterestRate);
    };
}

#endif
