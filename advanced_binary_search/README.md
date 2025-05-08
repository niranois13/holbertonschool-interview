# Advanced Binary Search

![advanced_binay_search](https://media.geeksforgeeks.org/wp-content/uploads/20240506155201/binnary-search-.webp)

## Description

This project focuses on implementing an **advanced binary search** algorithm in C. Unlike a standard binary search, this version returns the **first occurrence** of a value in a sorted array of integers. The implementation must use recursion and comply with specific coding standards and restrictions.

## Requirements

* **Editors**: vi, vim, emacs
* **OS**: Ubuntu 14.04 LTS
* **Compiler**: gcc 4.8.4 with flags: `-Wall -Werror -Wextra -pedantic`
* **Coding Style**: Betty style (checked with `betty-style.pl` and `betty-doc.pl`)
* **Other Restrictions**:
  * No global variables
  * No more than 5 functions per file
  * Only `printf` from the standard library is allowed (no `malloc`, `strdup`, etc.)
  * Header file must be protected with include guards

## Function

### `int advanced_binary(int *array, size_t size, int value);`

* Searches for a **value** in a **sorted array** of integers.
* Returns the **index of the first occurrence** of the value.
* If the value is not present or if the array is `NULL`, returns `-1`.
* Must print the subarray being searched at each step.
* Uses **recursion** (only one loop allowed for printing).

## Example Output

```
Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 6, 6, 7, 8, 9
Searching in array: 8, 9
Found 8 at index: 8

Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 0, 1, 2, 5, 5
Searching in array: 5, 5
Found 5 at index: 3

Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 6, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
```

## Files

* `0-advanced_binary.c`: Implementation of the advanced binary search algorithm.
* `search_algos.h`: Header file with function prototype and include guards.
* `README.md`: Project overview and usage.

---

## Usage

To compile and run:

```
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-advanced_binary.c -o search
./search
```
