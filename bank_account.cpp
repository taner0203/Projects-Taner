#include "bank_account.h"


//Constructor for Transaction class
Transaction::Transaction(std::string transactionType, double transactionAmount)
    : type(transactionType), amount(transactionAmount), timestamp(time(nullptr)) {}

//Display details of Transaction
void Transaction::display() const {
    std::cout << "Type: " << type << "\tAmount: $" << std::fixed << std::setprecision(2) << amount
              << "\tTimestamp: " << ctime(&timestamp);
}


//Constructor for BankAccount class
BankAccount::BankAccount(std::string number, std::string holder, double initialBalance)
    : accountNumber(number), accountHolder(holder), balance(initialBalance) {}

//Getter for account number
std::string BankAccount::getAccountNumber() const {
    return accountNumber;
}
//Getter for account holder's name
std::string BankAccount::getAccountHolder() const {
    return accountHolder;
}
//Getter for account balance
double BankAccount::getBalance() const {
    return balance;
}


//Fuction to deposit money to account 
void BankAccount::deposit(double amount) {

//Update balance and record the deposit transaction
    balance += amount;
    Transaction transaction("Deposit", amount);
    transactions.push_back(transaction);
//Display the updated balance
    std::cout << "Deposit successful. New balance: $" << std::fixed << std::setprecision(2) << balance << std::endl;
}
//Fucntion to withdraw money from an account

void BankAccount::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
        Transaction transaction("Withdrawal", amount);
        transactions.push_back(transaction);
        std::cout << "Withdrawal successful. New balance: $" << std::fixed << std::setprecision(2) << balance << std::endl;
    } else {
        std::cout << "Insufficient funds. Withdrawal unsuccessful." << std::endl;
    }
}

//Function to display account information, including transaction history
void BankAccount::display() const {
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Account Holder: " << accountHolder << std::endl;
    std::cout << "Balance: $" << std::fixed << std::setprecision(2) << balance << std::endl;
    std::cout << "----- Transaction History -----" << std::endl;
    for (const Transaction& transaction : transactions) {
        transaction.display();
    }
    std::cout << "------------------------" << std::endl;
}
