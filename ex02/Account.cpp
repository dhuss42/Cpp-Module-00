
#include "Account.hpp"
#include <iostream>
//     makeDeposit(int): Adds the deposit amount to the account balance.
//     makeWithdrawal(int): subtract the amount from the balance, likely with checks for sufficient funds.
//     displayStatus(): Outputs details of an account (e.g., balance, account number).
//     displayAccountsInfos(): A static method that aggregates and displays data for all accounts.


void Account::makeDeposit(int deposit)
{
    this->_amount += deposit;
}

bool Account::makeWithdrawal(int withdrawl)
{
    // check if there is enough money
    if (this->_amount - withdrawl < 0)
    {
        std::cout << "withdrawl refused\n";
        return (false);
    }
    this->_amount -= withdrawl;
    return (true);
}