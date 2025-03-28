# N-Queens Solver

## Description
The **N-Queens puzzle** is a challenge where `N` queens must be placed on an `N×N` chessboard so that no two queens attack each other. This program finds and prints all possible solutions for a given `N`.

## Usage
Run the program with:
```
./nqueens N
```
Where `N` is:
- An integer greater than or equal to **4**  
- The size of the chessboard (N×N) and the number of queens to place  

### Example:
```
$ ./nqueens 4
[[0, 1], [1, 3], [2, 0], [3, 2]]
[[0, 2], [1, 0], [2, 3], [3, 1]]
```
Each solution is printed as a list of `[row, column]` positions for each queen.

## Error Handling
If the program is run with incorrect input, it prints an error message and exits with status `1`:

- **Wrong number of arguments**:
  ```
  $ ./nqueens
  Usage: nqueens N
  ```
- **Non-integer input**:
  ```
  $ ./nqueens hello
  N must be a number
  ```
- **N is less than 4**:
  ```
  $ ./nqueens 3
  N must be at least 4
  ```

## Constraints
- The program **only uses the `sys` module**.
- It prints **all possible solutions**, one per line.
- Solutions can appear in any order.