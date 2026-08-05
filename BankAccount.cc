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
BankAccount::BankAccount() {
    this->balance = 0;
    this->name = "";
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