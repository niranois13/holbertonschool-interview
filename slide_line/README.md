# Slide Line

![slide line](https://i.imgur.com/1u3O8Cv.png)

## Description
This project implements the mechanics of the **2048** game on a **single horizontal line**. The goal is to slide and merge an array of integers to the **left** or **right**, following the game's merging rules.

## Rules
- Identical numbers merge when they are **contiguous** or **separated by zeros**.
- The array slides and merges in the given direction (**left** or **right**).
- The function should handle merging correctly without dynamically allocating memory.

## Function Prototype
```
int slide_line(int *line, size_t size, int direction);
```

### Parameters
- `line`: Pointer to an array of integers.
- `size`: Number of elements in the array.
- `direction`: The direction in which to slide and merge, which can be:
  - `SLIDE_LEFT`
  - `SLIDE_RIGHT`

### Return Value
- **1 (Success):** If the operation was successful.
- **0 (Failure):** If an invalid direction is provided.

## Macros
The following macros must be defined in `slide_line.h`:
```
#define SLIDE_LEFT  0
#define SLIDE_RIGHT 1
```

## Constraints
- The function **must not** use dynamic memory allocation (`malloc`, `calloc`, etc.).
- Only simple array manipulations are allowed.

## Compilation
Compile the program with:
```
gcc -Wall -Werror -Wextra -pedantic -o slide_line slide_line.c
```
