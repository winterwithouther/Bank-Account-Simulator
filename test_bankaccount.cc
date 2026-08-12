#include "BankAccount.h"
#include <cassert>
#include <iostream>

void testValidDeposit()
{
    BankAccount account;

    assert(account.initialize("Eman", 500.00));
    assert(account.deposit(100.00));
    assert(account.getBalance() == 600.00);

    std::cout << "testValidDeposit passed.\n";
}

void testDecimalDeposit()
{
    BankAccount account;

    assert(account.initialize("Eman", 500.00));
    assert(account.deposit(25.50));
    assert(account.getBalance() == 525.50);

    std::cout << "testDecimalDeposit passed.\n";
}

void testZeroDeposit()
{
    BankAccount account;

    assert(account.initialize("Eman", 500.00));
    assert(!account.deposit(0.00));
    assert(account.getBalance() == 500.00);

    std::cout << "testZeroDeposit passed.\n";
}

void testNegativeDeposit()
{
    BankAccount account;

    assert(account.initialize("Eman", 500.00));
    assert(!account.deposit(-50.00));
    assert(account.getBalance() == 500.00);

    std::cout << "testNegativeDeposit passed.\n";
}

void testMultipleDeposits()
{
    BankAccount account;

    assert(account.initialize("Eman", 500.00));
    assert(account.deposit(100.00));
    assert(account.deposit(50.00));
    assert(account.deposit(25.50));

    assert(account.getBalance() == 675.50);

    std::cout << "testMultipleDeposits passed.\n";
}

int main()
{
    testValidDeposit();
    testDecimalDeposit();
    testZeroDeposit();
    testNegativeDeposit();
    testMultipleDeposits();

    std::cout << "\nAll tests passed!\n";

    return 0;
}