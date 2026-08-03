#include "BankAccount.h"
#include <iostream>
#include <string>


/**
 * @name BankAccount Constructor
 * @brief Constructor for BankAccount
 * 
 * @param name : string
 * @param balance : double
 * @return void
 */
BankAccount::BankAccount(const std::string &name, double balance) {
    this->name = name;
    this->balance = balance;
}

/**
 * @name setName
 * @brief Sets the new name passed to object current name.
 * 
 * @param name : string
 * @return void
 */
void BankAccount::setName(std::string &name) {
    this->name = name;
}

/**
 * @name setBalance
 * @brief Sets the new balance passed to object current balance.
 * 
 * @param name : string
 * @param balance : double
 * @return void
 */
void BankAccount::setBalance(double balance) {
    this->balance = balance;
}

/**
 * @name printAccount
 * @brief Displays the information of current account object, name and balance.
 * 
 * @param none
 * @return void
 */
void BankAccount::printAccount() {
    std::cout << "Name: " << this->name << "\n"
              << "Balance: " << this->balance << std::endl;
}