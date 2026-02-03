# Basic Calculator For C

A simple C program that performs basic arithmetic operations.

## Description

This project contains a basic calculator implementation in C (`calculator.c`). It performs arithmetic operations on two hardcoded integer values.

## Features

The calculator supports the following operations:
*   Addition (`+`)
*   Subtraction (`-`)
*   Multiplication (`*`)
*   Division (`/`)
*   Modulo (`%`)

It also includes basic error handling for division by zero.

## Prerequisites

To compile and run this program, you need a C compiler installed on your system, such as GCC.

## How to Compile and Run

1.  Open your terminal or command prompt.
2.  Navigate to the directory containing `calculator.c`.
3.  Compile the code using `gcc`:
    ```bash
    gcc calculator.c -o calculator
    ```
4.  Run the executable:
    - On Windows:
      ```bash
      calculator.exe
      ```
    - On Linux/macOS:
      ```bash
      ./calculator
      ```

## Usage Notes

Currently, the values and the operation are hardcoded in the `main` function of `calculator.c`:

```c
int a = 1103;
int b = 60024;
char operation = '*';
```

To perform different calculations, you need to modify these variables in the source code and recompile the program.
