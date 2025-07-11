# Radix Sort Project

![radix_sort](https://i.imgur.com/Ugo8Z2b.png)

This project implements the **Radix Sort** algorithm in _C_, following strict guidelines on code style, compilation, and structure.
The program sorts arrays of integers using **non-comparison-based sorting**.

## Requirements
### General
**OS:** Ubuntu 14.04 LTS

**Compiler:** gcc 4.8.4 with flags: `-Wall -Werror -Wextra -pedantic`

**Code Style:** Must follow the _Betty_ style guide.

No global variables

Maximum 5 functions per file

No standard library usage (e.g., printf, puts not allowed)

All files must end with a new line

Header files must be include guarded

All function prototypes should be declared in sort.h

The print_array function (provided by the checker) must also be declared in sort.h

You are given the following function, which will be compiled with your code for output purposes:
`void print_array(const int *array, size_t size);`
This function prints an array of integers.

### Usage
While you're free to create your own main.c files for testing, do not push them to your repository. They will not be considered during evaluation. The evaluation process uses its own set of main files.

### Assumptions
Arrays/lists of size less than 2 are considered sorted.

Only integer arrays are used for this sorting algorithm.
