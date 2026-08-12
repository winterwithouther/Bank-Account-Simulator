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

void testValidWithdraw() {
    BankAccount account;

    assert(account.initialize("Eman", 500.00));
    assert(account.withdraw(100.00));
}

void testValidWithdrawal()
{
    BankAccount account;

    assert(account.initialize("Eman", 500.00));
    assert(account.withdraw(100.00));
    assert(account.getBalance() == 400.00);

    std::cout << "testValidWithdrawal passed.\n";
}

void testDecimalWithdrawal()
{
    BankAccount account;

    assert(account.initialize("Eman", 500.00));
    assert(account.withdraw(25.50));
    assert(account.getBalance() == 474.50);

    std::cout << "testDecimalWithdrawal passed.\n";
}

void testZeroWithdrawal()
{
    BankAccount account;

    assert(account.initialize("Eman", 500.00));
    assert(!account.withdraw(0.00));
    assert(account.getBalance() == 500.00);

    std::cout << "testZeroWithdrawal passed.\n";
}

void testNegativeWithdrawal()
{
    BankAccount account;

    assert(account.initialize("Eman", 500.00));
    assert(!account.withdraw(-50.00));
    assert(account.getBalance() == 500.00);

    std::cout << "testNegativeWithdrawal passed.\n";
}

void testWithdrawalEqualToBalance()
{
    BankAccount account;

    assert(account.initialize("Eman", 500.00));
    assert(account.withdraw(500.00));
    assert(account.getBalance() == 0.00);

    std::cout << "testWithdrawalEqualToBalance passed.\n";
}

void testWithdrawalGreaterThanBalance()
{
    BankAccount account;

    assert(account.initialize("Eman", 500.00));
    assert(!account.withdraw(500.01));
    assert(account.getBalance() == 500.00);

    std::cout << "testWithdrawalGreaterThanBalance passed.\n";
}

void testMultipleWithdrawals()
{
    BankAccount account;

    assert(account.initialize("Eman", 1000.00));
    assert(account.withdraw(100.00));
    assert(account.withdraw(250.00));
    assert(account.withdraw(49.50));

    assert(account.getBalance() == 600.50);

    std::cout << "testMultipleWithdrawals passed.\n";
}

int main()
{
    // deposit tests
    testValidDeposit();
    testDecimalDeposit();
    testZeroDeposit();
    testNegativeDeposit();
    testMultipleDeposits();

    std::cout << std::endl;
    
    // withdrawal tests
    testValidWithdrawal();
    testDecimalWithdrawal();
    testZeroWithdrawal();
    testNegativeWithdrawal();
    testWithdrawalEqualToBalance();
    testWithdrawalGreaterThanBalance();
    testMultipleWithdrawals();

    std::cout << "\nAll tests passed!\n";

    return 0;
}