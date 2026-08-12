#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
    public:
        BankAccount();
        void printAccount() const;    
        bool initialize(const std::string &name, double balance);
        bool deposit(double amount);
        bool withdraw(double amount);

        // Accessors
        std::string getName() const;
        double getBalance() const;

    private:
        std::string ownerName;
        double balance;
        bool initialized;
};

#endif