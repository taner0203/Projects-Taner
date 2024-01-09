#include "bank.h"

int main() {
    Bank bank;

    // Creating accounts
    BankAccount account1("001216", "Ivan Ivanov", 10000.0);
    BankAccount account2("001219", "Peter Petrov", 5000.0);

    // Adding accounts to the bank
    bank.addAccount(account1);
    bank.addAccount(account2);

    // Displaying all accounts
    bank.displayAllAccounts();

    // Example of a deposit
    BankAccount* johnsAccount = bank.findAccount("123456");
    if (johnsAccount) {
        johnsAccount->deposit(500.0);
    }

    // Example of a withdrawal
    BankAccount* janesAccount = bank.findAccount("789012");
    if (janesAccount) {
        janesAccount->withdraw(200.0);
    }

    return 0;
}
