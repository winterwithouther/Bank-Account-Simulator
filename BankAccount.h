#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
    public:
        BankAccount(const std::string &name, double balance);
    private:
        std::string name;
        double balance;
};

#endif