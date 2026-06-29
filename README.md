
Question 1:
https://onlinegdb.com/dpaiOJwGh

# Bank Account Management System (C++)

## Project Title
Bank Account Management System using Object-Oriented Programming (OOP) in C++

---

## Description
This project is a simple Bank Account Management System developed in C++ using Object-Oriented Programming concepts. It allows users to perform banking operations such as deposit, withdrawal, interest calculation, overdraft checking, and displaying account information.

---

## Features

- Deposit money into a Savings Account
- Withdraw money from a Savings Account
- Calculate interest for Savings Account
- Withdraw money using Checking Account overdraft facility
- Calculate interest for Fixed Deposit Account
- Display account details
- Menu-driven program
- Uses inheritance and polymorphism

---

## OOP Concepts Used

- Class and Object
- Inheritance
- Constructor
- Function Overriding
- Virtual Function
- Encapsulation
- Polymorphism
- Destructor

---

## Classes

### 1. BankAccount (Base Class)
Contains:
- Account Number
- Account Holder Name
- Balance

Functions:
- deposit()
- withdraw()
- getBalance()
- calculateInterest()
- displayAccountInfo()

---

### 2. SavingsAccount (Derived Class)

Additional Member:
- Interest Rate

Functions:
- calculateInterest()
- displayAccountInfo()

---

### 3. CheckingAccount (Derived Class)

Additional Member:
- Overdraft Limit

Functions:
- checkOverdraft()
- displayAccountInfo()

---

### 4. FixedDepositAccount (Derived Class)

Additional Members:
- Term (Months)
- Interest Rate

Functions:
- calculateInterest()
- displayAccountInfo()

---

## Menu Options

1. Deposit in Savings Account
2. Withdraw from Savings Account
3. Calculate Savings Interest
4. Display Savings Account
5. Withdraw from Checking Account
6. Display Checking Account
7. Calculate Fixed Deposit Interest
8. Display Fixed Deposit Account
9. Exit

---

## Sample Accounts

### Savings Account
- Account No: 101
- Name: Rahul
- Balance: ₹10,000
- Interest Rate: 5%

### Checking Account
- Account No: 102
- Name: Priya
- Balance: ₹8,000
- Overdraft Limit: ₹3,000

### Fixed Deposit Account
- Account No: 103
- Name: Amit
- Balance: ₹50,000
- Term: 12 Months
- Interest Rate: 7%

---

## Requirements

- C++ Compiler (GCC, G++, MSVC, etc.)
- Code::Blocks / Visual Studio / VS Code

---

## How to Run

1. Open the project in your C++ IDE.
2. Compile the source file.
3. Run the program.
4. Choose an option from the menu.
5. Perform banking operations.
6. Enter 9 to exit.

---

## Learning Outcomes

After completing this project, you will understand:

- Object-Oriented Programming
- Inheritance
- Polymorphism
- Function Overriding
- Constructors and Destructors
- Menu-driven programming in C++

---



Subject: Object-Oriented Programming using C++

Project: Bank Account Management System
