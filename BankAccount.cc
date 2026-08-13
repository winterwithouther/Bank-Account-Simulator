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

/**
 * @name deposit
 * @brief Deposit's amount to the bank owner's balance.
 * 
 * @param amount incoming amount added to balance.
 * @return True if deposit suceeds.
 */
bool BankAccount::deposit(double amount) {
    if (amount <= 0) {
        return false;
    }

    balance += amount;
    return true;
}

/**
 * @name withdraw
 * @brief Withdraw amount from the bank owner's balance.
 * 
 * @param amount incoming amount withdraw from balance.
 * @return True if deposit suceeds.
 */
bool BankAccount::withdraw(double amount) {
    if (amount <= 0) {
        return false;
    }

    if (amount > this->balance) {
        return false;
    }

    this->balance = (this->balance - amount);
    return true;
}

/**
 * @name getName
 * @brief Returns the owner name of the BankAccount object.
 * 
 * @param none
 * @return Owner name
 */
std::string BankAccount::getName() const {
    return this->ownerName;
}

/**
 * @name getBalance
 * @brief Returns the balance of the BankAccount object.
 * 
 * @param none
 * @return balance
 */
double BankAccount::getBalance() const {
    return this->balance;
}