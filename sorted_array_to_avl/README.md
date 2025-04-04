# Array to AVL

![arrayToAVL](https://i.imgur.com/QcBPyvB.png)

## Description
This project involves implementing various functions related to binary trees. The project follows strict guidelines for compilation, coding style, and structure.

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 14.04 LTS
- Compilation using `gcc 4.8.4` with flags:
  ```
  gcc -Wall -Werror -Wextra -pedantic
  ```
- All files must end with a new line
- Code must follow the Betty coding style (`betty-style.pl` and `betty-doc.pl` will be used for checking)
- No use of global variables
- No more than 5 functions per file
- Use of the standard library is allowed
- Function prototypes should be in `binary_trees.h`
- Header files must be protected by include guards

## Data Structures
The following data structures are used for binary trees:
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
```

## Compilation
To compile the project, use:
```
gcc -Wall -Werror -Wextra -pedantic *.c -o binary_trees
```

## Usage
- The project contains multiple functions to manipulate binary trees.
- The `main.c` files provided in examples are for testing and should not be pushed to the repository.
- A print function is available for visualization but is not required for the correction.