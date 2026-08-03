#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
    public:
        BankAccount(const std::string &name = "", double balance = 0);
        void setName(std::string &name);
        void setBalance(double balance);
        void printAccount();

    private:
        std::string name;
        double balance;
};

#endif