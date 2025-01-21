# Minimum Operation Algorithm

![minimum operation](https://i.imgur.com/3IvTMmr.png)

## Description
The **Minimum Operation Algorithm** is designed to find the smallest number of operations required to transform a given input into a desired output. This can be applied to various problems, such as:
- String transformation (edit distance)
- Mathematical operations to reach a target value
- Any problem that involves reducing a set of operations to the minimum necessary steps

This algorithm utilizes dynamic programming, greedy methods, or other optimal strategies to compute the minimum number of operations efficiently.

## Problem Statement

Given two entities (e.g., strings, numbers, etc.), the algorithm calculates the minimum number of operations to transform one entity into another. Depending on the problem, operations can include:
- Insertion
- Deletion
- Substitution
- Arithmetic operations (addition, subtraction, multiplication, etc.)

## Example

### Problem 1: Minimum Edit Distance (String Transformation)
Transform string `s1 = "kitten"` to string `s2 = "sitting"` using the minimum number of operations (insert, delete, substitute).

#### Operations:
- kitten → sitten (substitute 'k' with 's')
- sitten → sittin (insert 'i')
- sittin → sitting (insert 'g')

**Minimum operations** = 3

### Problem 2: Minimum Steps to Reach Target (Mathematical Transformation)
Starting from the number `n = 3`, find the minimum number of operations required to reach the target `target = 11` by adding 1 or multiplying by 2 at each step.

#### Operations:
- 3 → 6 (multiply by 2)
- 6 → 7 (add 1)
- 7 → 14 (multiply by 2)
- 14 → 11 (subtract 3)

**Minimum operations** = 4

## Algorithm

1. **Dynamic Programming (for String Transformations):**
   - Create a table where each cell represents the minimum number of operations required to transform one substring into another.
   - Iterate through each character of the two strings, filling the table based on insertion, deletion, or substitution.
   
2. **Breadth-First Search (for Mathematical Operations):**
   - Use BFS to explore all possible operations starting from the initial number.
   - Track the minimum number of steps required to reach the target.

## Time Complexity
The time complexity of the algorithm depends on the approach used:
- **For string transformations (Dynamic Programming):**  
  Time complexity is **O(m * n)** where `m` is the length of string `s1` and `n` is the length of string `s2`.
  
- **For mathematical transformations (BFS):**  
  Time complexity is **O(N)** where `N` is the range of numbers you can reach (depending on the problem constraints).