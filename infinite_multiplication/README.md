# Infinite Multiplication

![infinite_multiplication](https://i.imgur.com/T9Gm2l7.jpeg)

## Description

This project implements a program that multiplies two **positive integers** of arbitrary length. The result is printed to the standard output.

The input numbers are passed as command-line arguments, and are assumed to be in **base 10**. This task mimics how manual multiplication works by processing strings digit-by-digit.

---

## Requirements

- Ubuntu 14.04 LTS
- gcc 4.8.4 with the flags: `-Wall -Werror -Wextra -pedantic`
- Betty coding style (checked using `betty-style.pl` and `betty-doc.pl`)
- Only allowed C standard library functions: `malloc`, `free`, `exit`
- No global variables
- No more than 5 functions per file (except for this task)
- Header file must be named `holberton.h`
- You may use `_putchar`
- `_putchar.c` should not be pushed to the repo
- `main.c` is used for testing only and should not be pushed

---

## Usage

```
gcc -Wall -Werror -Wextra -pedantic 0-mul.c _putchar.c -o mul
./mul <num1> <num2>
````

* `<num1>` and `<num2>`: Positive integers in base 10

### Example

```
$ ./mul 123 456
56088
```

---

## Error Handling

* If the number of arguments is incorrect:
  Output: `Error` (followed by a new line), exit with status `98`

* If either argument contains non-digit characters:
  Output: `Error` (followed by a new line), exit with status `98`

---

## Files

* `0-mul.c`: Main logic to multiply two positive numbers
* `holberton.h`: Contains all function prototypes and `_putchar` prototype

---

## Notes

* This program supports multiplication of very large numbers by processing them as strings.
* You can use `bc` to verify the correctness of results.
