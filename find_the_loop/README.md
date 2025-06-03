# Find the Loop

![finde_the_loop_linked_list](https://i.imgur.com/HNuKkyz.png)

## Description

This project is focused on detecting a loop in a singly linked list using a custom implementation in C. The function `find_listint_loop` determines whether a loop exists and returns the address of the node where the loop starts.

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* Ubuntu 14.04 LTS environment
* GCC version: `4.8.4`
* Compilation flags: `-Wall -Werror -Wextra -pedantic`
* Betty coding style required
* No use of:

  * Global variables
  * More than 5 functions per file
  * Standard library functions (`printf`, `malloc`, etc.)
  * Arrays
* All header files must be include guarded
* All files must end with a new line

## Files

* `0-find_loop.c` - Contains the `find_listint_loop` function implementation.
* `lists.h` - Header file with all required function prototypes and struct definitions.
* `README.md` - Project documentation.

## Prototype

```
listint_t *find_listint_loop(listint_t *head);
```

## Function Description

* Returns: Address of the node where the loop starts, or `NULL` if there is no loop.
* Restrictions:

  * Max 2 variables allowed.
  * Cannot use `malloc`, `free`, or arrays.

## Data Structure

```
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

## Compilation

To compile with the provided static library:

```
gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-find_loop.c -L. -lloop -o main
```

To compile using the source file instead of the static library:

```
gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-find_loop.c lib.c -o main
```

## Usage

Run the compiled program:

```
./main
```

Sample output will show the nodes and indicate where the loop starts, if present.

## Example Output

```
[0x...] 1024
[0x...] 402
...
-> [0x...] 7
Loop starts at [0x...] 7
```
