#include "BankAccount.h"
#include <iostream>
#include <iomanip>

void mainDisplay(BankAccount &account);
void Startup();
bool createAccount(BankAccount &account);

int main() {
    bool accountExists = false;
    int input = 0;

    BankAccount account;

    while (true) {
        if (accountExists) {
            mainDisplay(account);
            std::cin >> input;
        } else {
            Startup();
            std::cin >> input;
            
            std::cout << std::endl;
            if (input == 1) {
                if (createAccount(account)) {
                    accountExists = true;
                }
            } else if (input == 2) {
                // Exit the program
                break;
            }
        }
    }

    return 0;
}

void mainDisplay(BankAccount &account) {
    std::cout << "=========================================" << std::endl;
    std::cout << "         BANK ACCOUNT SIMULATOR" << std::endl;
    std::cout << "=========================================" << std::endl << std::endl;

    std::cout << "Welcome, " << account.getName() << "!" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "1. Deposit Money" << std::endl;
    std::cout << "2. Withdraw Money" << std::endl;
    std::cout << "3. View Account Information" << std::endl;
    std::cout << "4. Exit" << std::endl;

    std::cout << "Enter your choice: ";
}

void Startup() {
    std::cout << "=========================================" << std::endl;
    std::cout << "         BANK ACCOUNT SIMULATOR" << std::endl;
    std::cout << "=========================================" << std::endl << std::endl;

    std::cout << "No bank account currently exists." << std::endl << std::endl;

    std::cout << "1. Create Account" << std::endl;
    std::cout << "2. Exit" << std::endl << std::endl;

    std::cout << "Enter your choice: ";
}

bool createAccount(BankAccount &account) {
    std::string name = "";
    double balance = 0;

    std::cout << "=========================================" << std::endl;
    std::cout << "           CREATE ACCOUNT" << std::endl;
    std::cout << "=========================================" << std::endl << std::endl;
    
    std::cout << "Owner Name: ";
    std::cin >> name;
    std::cout << std::endl;

    std::cout << "Starting Balance: $";
    std::cin >> balance;
    std::cout << std::endl;

    std::cout << "Creating account..." << std::endl;

    if (account.initialize(name, balance)) {
        std::cout << "✔ Account created successfully!" << std::endl << std::endl;
        return true;
    } else {
        std::cout << "✖ Failed to create account." << std::endl << std::endl;
        return false;
    }
}