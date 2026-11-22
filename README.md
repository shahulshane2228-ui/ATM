# ATM Management System

A beginner-friendly ATM Management System developed using the C programming language.

## Features

- PIN verification before accessing the ATM menu
- Check account balance
- Deposit money
- Withdraw money
- Validate deposit and withdrawal amounts
- Prevent withdrawals that exceed the available balance
- Exit the ATM application

## Default Details

- **Default PIN:** 1234
- **Initial Balance:** Rs. 10,000.00

## How to Compile

Using GCC:

```bash
gcc atm_management.c -o atm_management
```

## How to Run

On Windows:

```bash
atm_management.exe
```

On Linux or macOS:

```bash
./atm_management
```

## Concepts Used

- Variables and data types
- Input and output
- Conditional statements
- Switch-case
- Do-while loop
- Arithmetic operations

## Note

This is an educational console-based simulation. The PIN and balance are stored directly in the program and are not connected to a real bank account. The balance is not saved after the program exits.
