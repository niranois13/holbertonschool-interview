# Heap Sort

![heap_sort](https://i.imgur.com/Zq4tdjq.png)

## Description

This project focuses on implementing the **Heap Sort** algorithm in C. You must build a sift-down-based heap sort function that sorts an array of integers in ascending order. The array should be printed after each swap to demonstrate the sorting steps.

## Requirements

* **Editors**: vi, vim, emacs
* **OS**: Ubuntu 14.04 LTS
* **Compiler**: `gcc 4.8.4` with flags: `-Wall -Werror -Wextra -pedantic`
* **Coding Style**: Betty style (checked using `betty-style.pl` and `betty-doc.pl`)
* **Other Restrictions**:

  * No global variables
  * No more than 5 functions per file
  * **No use of standard library functions** (`printf`, `puts`, etc.) unless specified
  * Arrays of size < 2 are considered already sorted
  * Header files must be include-guarded
  * You must use the provided `print_array` function

## Provided Function

You must include the following prototype in your `sort.h` header file:

```
void print_array(const int *array, size_t size);
```

This function will be used to display the array after each swap during sorting.

## Function

### `void heap_sort(int *array, size_t size);`

* Sorts an array of integers in **ascending order** using the **heap sort** algorithm
* Implements the **sift-down** heap sort method
* Must print the array **after each swap**
* Sorting must be done in-place

## Example

Given the array:

```
[19, 48, 99, 71, 13, 52, 96, 73, 86, 7]
```

Output will show the intermediate steps and final sorted array:

```
19, 48, 99, 71, 13, 52, 96, 73, 86, 7
...
7, 13, 19, 48, 52, 71, 73, 86, 96, 99
```

Each intermediate state after a swap is printed by `print_array`.

## Files

* `0-heap_sort.c`: Heap sort implementation using sift-down method
* `sort.h`: Header file with function prototypes and include guards
* `print_array.c`: Provided helper function for printing arrays
* `0-O`: Time complexity notes (1 line per case)
* `README.md`: Project documentation

## Compilation and Execution

To compile and run:

```
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-heap_sort.c print_array.c -o heap
./heap
```
