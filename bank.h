#ifndef BANK_H
#define BANK_H

#include <vector>
#include <bank_account.h>

class Bank {

    private:
    std::vector<BankAccount> accounts;

    public:
        //Function to add a new account
        void AddAccount(const BankAccount& account);

        //Function to display all accounts
        void displayAllAccounts() const;

        //Function to find an account by account number
        BankAccount* findAccount(const std::string& accountNumber);
};

#endif