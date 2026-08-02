# Bank Account Simulator

## Overview

The **Bank Account Simulator** is a command-line application written in **C++** that simulates the basic functionality of a bank account. The purpose of this project is to strengthen object-oriented programming skills while practicing clean code organization, input validation, and class design.

This project is part of a larger systems programming learning path and focuses on building a solid foundation in modern C++ before moving on to more advanced topics such as operating systems, networking, and concurrency.

---

## Objectives

* Practice object-oriented programming (OOP)
* Learn proper class design and encapsulation
* Separate declarations and implementations using header and source files
* Improve input validation and error handling
* Gain experience organizing a multi-file C++ project

---

## Features

### Account Creation

* Create a bank account with:

  * Owner name
  * Initial balance
* Prevent invalid starting balances.

### Deposit Money

* Deposit money into the account.
* Reject:

  * Negative amounts
  * Zero-dollar deposits
* Update the account balance after a successful deposit.

### Withdraw Money

* Withdraw money from the account.
* Prevent:

  * Negative withdrawals
  * Zero-dollar withdrawals
  * Withdrawals that exceed the available balance

### View Account Information

Display the current account information, including:

* Account owner's name
* Current balance

### Interactive Menu

Provide a menu-driven interface that repeatedly allows the user to:

1. Deposit money
2. Withdraw money
3. View account information
4. Exit the application

The application should continue running until the user chooses to exit.

---

## Input Validation

The application should handle invalid user input gracefully.

Examples include:

* Non-numeric menu selections
* Invalid monetary values
* Negative deposits
* Negative withdrawals
* Withdrawals exceeding the current balance

The program should never terminate unexpectedly because of invalid user input.

---

## Project Structure

```text
BankAccountSimulator/
│
├── main.cpp
├── BankAccount.h
├── BankAccount.cpp
└── README.md
```

---

## Technical Requirements

* Written in modern C++
* Use classes and objects
* Keep data members private
* Organize code into header and implementation files
* Use member functions to modify account data
* Avoid global variables
* Follow consistent formatting and naming conventions

---

## Optional Enhancements

Once the core project is complete, consider implementing additional features such as:

* Transaction history
* Multiple bank accounts
* Account numbers
* Saving account data to a file
* Loading account data from a file
* Interest calculations
* Account transfers
* Password-protected accounts
* Unit tests


