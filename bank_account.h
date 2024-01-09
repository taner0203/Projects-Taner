#ifndef BANK_ACCOUNT
#define BANK_ACCOUNT

#include <iostream>
#include <vector>
#include <iomanip>
#include <ctime>

using namespace std;

class Transaction {
private:
    std::string type;
    double amount;
    time_t timestamp;

public:
    Transaction(std::string transactionType, double transactionAmount);

    // Display transaction details
    void display() const;
};

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolder;
    double balance;

    // Store transaction history
    std::vector<Transaction> transactions;

public:
    BankAccount(std::string number, std::string holder, double initialBalance);

    // Getters
    std::string getAccountNumber() const;
    std::string getAccountHolder() const;
    double getBalance() const;

    // Function to deposit money
    void deposit(double amount);

    // Function to withdraw money
    void withdraw(double amount);

    // Function to display account information
    void display() const;
};

#endif
