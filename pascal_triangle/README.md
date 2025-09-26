# Pascal's Triangle

![a triangle](https://i.imgur.com/KF4IYP3.png)

## Description
This project implements a Python function that generates Pascal’s Triangle up to a given number of rows.  
Pascal’s Triangle is a triangular array where each number is the sum of the two numbers directly above it.

Example of Pascal’s Triangle with 5 rows:
```
[1]
[1, 1]
[1, 2, 1]
[1, 3, 3, 1]
[1, 4, 6, 4, 1]
```

---

## Function Prototype

```
def pascal_triangle(n):
    """
    Returns a list of lists of integers representing Pascal’s triangle of n.
    - Returns an empty list if n <= 0
    - You can assume n will always be an integer
    """
```
## Base test code
```
#!/usr/bin/python3
"""
0-main
"""
pascal_triangle = __import__('0-pascal_triangle').pascal_triangle

def print_triangle(triangle):
    """
    Print the triangle
    """
    for row in triangle:
        print("[{}]".format(",".join([str(x) for x in row])))


if __name__ == "__main__":
    print_triangle(pascal_triangle(5))
```