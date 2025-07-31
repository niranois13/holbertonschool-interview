# Wild Compare Project

![wild_compare](https://i.imgur.com/vHgLWyx.jpeg)

## Description
This project involves writing a function that compares two strings and determines if they can be considered identical, with the second string potentially containing the special character `*`. The `*` can replace any string, including an empty string.

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on **Ubuntu 14.04 LTS**
- Programs and functions will be compiled with `gcc 4.8.4` using the flags:
  - `-Wall`
  - `-Werror`
  - `-Wextra`
  - `-pedantic`
- All files must end with a new line.
- A `README.md` file is mandatory at the root of the project folder.
- Code must adhere to the **Betty style**, checked using `betty-style.pl` and `betty-doc.pl`.
- Global or static variables are not allowed.
- No more than 5 functions per file.
- The standard library cannot be used.
- Function prototypes must be included in a header file named `holberton.h`.
- The header file must be pushed to the repository.
- Loops of any kind are not permitted.

### Tasks
#### 0. Wild Compare
- **Mandatory**: Write a function that compares two strings.
- **Prototype**: `int wildcmp(char *s1, char *s2);`
- The second string (`s2`) can contain the special character `*`.

### Example Usage
The following is an example of how to use the `wildcmp` function:

```
#include "holberton.h"
#include <stdio.h>

int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r); // Output: 1
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r); // Output: 1
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r); // Output: 1
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r); // Output: 1
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r); // Output: 1
    r = wildcmp("main.c", "*");
    printf("%d\n", r); // Output: 1
    r = wildcmp("main.c", "***");
    printf("%d\n", r); // Output: 1
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r); // Output: 1
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r); // Output: 1
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r); // Output: 1
    r = wildcmp("main", "main*d");
    printf("%d\n", r); // Output: 0
    r = wildcmp("abc", "*b");
    printf("%d\n", r); // Output: 1
    return (0);
}
```

### Compilation
To compile the program, use the following command:

```
gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-wildcmp.c -o 0-wildcmp
```
