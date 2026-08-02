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

Create a bank account by providing:

* Account owner's name
* Initial balance

The constructor should initialize the account and validate the starting balance.

**Possible Prototype**

```cpp
BankAccount(const std::string& ownerName, double initialBalance);
```

---

### Deposit Money

Deposit money into the account.

Requirements:

* Reject deposits less than or equal to zero.
* Update the account balance if the deposit is valid.
* Return whether the operation succeeded.

**Possible Prototype**

```cpp
bool deposit(double amount);
```

---

### Withdraw Money

Withdraw money from the account.

Requirements:

* Reject withdrawals less than or equal to zero.
* Prevent overdrawing the account.
* Update the balance if the withdrawal is successful.
* Return whether the operation succeeded.

**Possible Prototype**

```cpp
bool withdraw(double amount);
```

---

### View Account Information

Display the current account information, including:

* Owner's name
* Current balance

This function should not modify the object.

**Possible Prototype**

```cpp
void displayAccount() const;
```

---

### Retrieve Current Balance

Allow other parts of the program to access the account balance without modifying it.

**Possible Prototype**

```cpp
double getBalance() const;
```

---

### Retrieve Account Owner

Return the account owner's name.

**Possible Prototype**

```cpp
const std::string& getOwnerName() const;
```

---

### Interactive Menu

Provide a menu-driven interface that repeatedly allows the user to:

1. Deposit money
2. Withdraw money
3. View account information
4. Exit the application

The program should continue running until the user chooses to exit.

A helper function can be used to display the menu.

**Possible Prototype**

```cpp
void displayMenu();
```

---

### Input Validation

Validate all user input before performing operations.

Examples include:

* Invalid menu selections
* Non-numeric input
* Negative values
* Zero-dollar transactions
* Withdrawals larger than the current balance

Possible helper functions include:

```cpp
int getMenuChoice();
double getTransactionAmount();
```

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

---

