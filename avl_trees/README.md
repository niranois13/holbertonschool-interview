# AVL Tree

![AVL_tree](https://i.imgur.com/A9Jju0M.png)

## Description

This project is part of the **Holberton School Interview Preparation** curriculum. It focuses on implementing a function to determine whether a given binary tree is a **valid AVL Tree**.

An **AVL Tree** is a self-balancing Binary Search Tree (BST) where the height difference (balance factor) between the left and right subtrees of any node is at most one. Additionally, both subtrees must also be valid BSTs.

---

## Requirements

### Environment
- OS: Ubuntu 14.04 LTS
- Compiler: `gcc 4.8.4`
- Compilation flags: `-Wall -Wextra -Werror -pedantic`

### Coding Style
- **Betty style** is mandatory (checked with `betty-style.pl` and `betty-doc.pl`)
- No global variables
- No more than 5 functions per file
- All files end with a new line
- All function prototypes must be in `binary_trees.h`
- Header files must be include guarded

---

## File Structure

```

avl\_trees/
├── 0-binary\_tree\_is\_avl.c     # Function to check if tree is AVL
├── binary\_trees.h             # Header file with prototypes and structs
└── README.md                  # Project documentation

````

---

## Function Implemented

### `int binary_tree_is_avl(const binary_tree_t *tree);`

#### Description
Checks if a binary tree is a valid AVL Tree.

#### Parameters
- `tree`: Pointer to the root node of the tree

#### Return Value
- `1` if the tree is a valid AVL Tree
- `0` otherwise (including if `tree` is `NULL`)

#### AVL Tree Criteria
1. The tree must be a Binary Search Tree (BST)
2. For every node, the difference in height between its left and right subtree must be ≤ 1
3. Both left and right subtrees must also be AVL trees

---

## Data Structures

```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s avl_t;
````

---

## Usage

Compile with:

```
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_is_avl.c -L. -lavl -o 0-is_avl
```

Run with:

```
./0-is_avl
```

---

## Notes

* A static library is provided for local testing (`libavl.a`), but **it will not be used for grading**.
* `binary_tree_print.c` is used for visualization only and is not required in your submission.
