#include "BankAccount.h"
#include <iostream>
#include <iomanip>

void Startup();
void createAccount(BankAccount &account);

int main() {
    bool accountExists = false;
    int input = 0;

    BankAccount account;

    while (true) {
        if (accountExists) {
            // display
        } else {
            Startup();
            std::cin >> input;
            
            std::cout << std::endl;
            if (input == 1) {
                createAccount(account);
                accountExists = true;
                account.printAccount();
            } else if (input == 2) {
                // Exit the program
                break;
            }
        }
    }

    return 0;
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

void createAccount(BankAccount &account) {
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
}