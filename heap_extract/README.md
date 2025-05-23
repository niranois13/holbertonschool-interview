# Heap Extract

## Description

This project implements a function to extract the root node of a Max Binary Heap. A Max Binary Heap is a complete binary tree where the value of each node is greater than or equal to the values of its children.

The core functionality includes removing the root of the heap, replacing it with the last inserted node (last level-order node), and restructuring the tree to maintain the heap property.

## File Structure

- `0-heap_extract.c`: Contains the implementation of the `heap_extract` function.
- `binary_trees.h`: Header file with function prototypes and the binary tree structure.
- `binary_tree_print.c`: Utility file used only for visualizing the tree (not pushed to repo).
- `0-main.c`: Sample main file for testing (not pushed to repo).

## Function Prototype

```
int heap_extract(heap_t **root);
````

* **root**: Double pointer to the root node of the heap.
* **Return**: Value stored in the root node. If the function fails, returns 0.


## Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* Ubuntu 14.04 LTS
* GCC 4.8.4 with flags: `-Wall -Werror -Wextra -pedantic`
* Code must follow the Betty style
* No global variables
* Max 5 functions per file
* Standard library allowed
* Include guards required in header files
* All function prototypes in `binary_trees.h`


## Data Structures

```
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

typedef struct binary_tree_s heap_t;
```

## Usage

To compile and run:

```
gcc -Wall -Wextra -Werror -pedantic -o 0-heap_extract 0-main.c 0-heap_extract.c binary_tree_print.c -L. -lheap
./0-heap_extract
```
