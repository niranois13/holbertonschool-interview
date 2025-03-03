# Palindrome Unsigned Integer Checker

![palindrome integer](https://i.imgur.com/hKghVQC.png)

- [Palindrome Unsigned Integer Checker](#palindrome-unsigned-integer-checker)
  - [Description](#description)
  - [Prototype](#prototype)
  - [Requirements](#requirements)
  - [Compilation](#compilation)
  - [Usage](#usage)
  - [Files](#files)

## Description
This project consists of a function that determines whether a given unsigned integer is a palindrome. A palindrome is a number that reads the same forward and backward.

## Prototype
```
int is_palindrome(unsigned long n);
```

## Requirements
- The function must return `1` if the given number is a palindrome, otherwise return `0`.
- Dynamic memory allocation (`malloc`, `calloc`, etc.) is not allowed.
- The function is implemented in C and follows standard compilation flags.

## Compilation
To compile the program, use the following command:
```
gcc -Wall -Wextra -Werror -pedantic -g3 -o palindrome 0-main.c 0-is_palindrome.c
```

## Usage
Run the compiled program with an integer argument:
```
./palindrome <number>
```
Example:
```
./palindrome 121
```
Output:
```
121 is a palindrome.
```

## Files
- `0-is_palindrome.c` - Contains the function implementation.
- `0-main.c` - Contains the main function to test the implementation.
- `palindrome.h` - Header file with function prototype.
