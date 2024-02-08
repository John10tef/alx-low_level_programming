# 0x14. C - Bit Manipulation

## Description

This project focuses on the topic of bit manipulation in the C programming language. It covers various tasks related to manipulating bits and using bitwise operators.

## Learning Objectives

By the end of this project, you should be able to:

- Look for the right source of information without excessive help
- Manipulate bits and use bitwise operators effectively

## Requirements

### General
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the following flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file, at the root of the project folder, is mandatory
- Code should follow the Betty style guidelines. Use `betty-style.pl` and `betty-doc.pl` to check your code's style
- Do not use global variables
- Each file should contain no more than 5 functions
- Only the standard library functions `malloc`, `free`, and `exit` are allowed. Functions like `printf`, `puts`, `calloc`, `realloc`, etc. are not allowed
- You are allowed to use the `_putchar` function
- The prototypes of all functions and the `_putchar` function should be included in the `main.h` header file
- All header files should have include guards
- Don't forget to push your header file

### Tasks

#### 0. 0
- Prototype: `unsigned int binary_to_uint(const char *b);`

#### 1. 1
- Prototype: `void print_binary(unsigned long int n);`

#### 2. 10
- Prototype: `int get_bit(unsigned long int n, unsigned int index);`

#### 3. 11
- Prototype: `int set_bit(unsigned long int *n, unsigned int index);`

#### 4. 100
- Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`

#### 5. 101
- Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
