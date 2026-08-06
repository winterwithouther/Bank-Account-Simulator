#include "BankAccount.h"
#include <iostream>
#include <string>


/**
 * @name BankAccount Constructor
 * @brief Constructor for BankAccount
 * 
 * @param name Owner's name
 * @param balance Starting balance.
 * @return void
 */
BankAccount::BankAccount() : ownerName(""), balance(0.0), initialized(false) {}

/**
 * @name printAccount
 * @brief Displays the information of current account object, name and balance.
 * 
 * @param none
 * @return void
 */
void BankAccount::printAccount() const {
    std::cout << "Name: " << this->ownerName << "\n"
              << "Balance: " << this->balance << std::endl;
}

/**
 * @name initialize
 * @brief Initializes bank account object with parameter data.
 * 
 * @param name Owner's name
 * @param balance Starting balance.
 * @return True if initialization suceeds.
 */
bool BankAccount::initialize(const std::string &name, double balance) {
    if (name.length() <= 0) {
        std::cout << "Name cannot be empty." << std::endl;
        return false;
    }

    if (balance < 0) {
        std::cout << "Balance cannot be negative." << std::endl;
        return false;
    }

    this->ownerName = name;
    this->balance = balance;
    this->initialized = true;
    return true;
}