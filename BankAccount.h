#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
    public:
        BankAccount();
        void printAccount();

    private:
        std::string name;
        double balance;
};

#endif  