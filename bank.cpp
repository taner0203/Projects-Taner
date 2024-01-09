#include "bank.h"

// Function to add a new account
void Bank::addAccount(const BankAccount& account) {
    accounts.push_back(account);
    std::cout << "Account added successfully." << std::endl;
}

// Function to display all accounts
void Bank::displayAllAccounts() const {
    std::cout << "----- All Accounts -----" << std::endl;
    for (const BankAccount& account : accounts) {
        account.display();
        std::cout << "------------------------" << std::endl;
    }
}

// Function to find an account by account number
BankAccount* Bank::findAccount(const std::string& accountNumber) {
    for (BankAccount& account : accounts) {
        if (account.getAccountNumber() == accountNumber) {
            return &account;
        }
    }
    return nullptr; 
}
