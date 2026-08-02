#include "BankAccount.h"
#include <iostream>
#include <string>

BankAccount::BankAccount(const std::string &name, double balance) {
    this->name = name;
    this->balance = balance;
}