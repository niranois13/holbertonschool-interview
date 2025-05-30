# Rotate 2D Matrix

![rotate_2d_matix](https://i.imgur.com/QnJzrTy.png)

## Description

This project implements an in-place rotation of a square 2D matrix by 90 degrees clockwise, as part of a technical interview preparation series.

## Requirements

- All files are interpreted using **Python 3.4.3**
- All code follows **PEP 8** style guide (version 1.7.x)
- No external modules or imports are allowed
- All files must be **executable**
- All functions and modules are **documented**
- The first line of all files must be:
  ```
  #!/usr/bin/python3
  ```

## Usage

To test the function, run a script like this:

```
#!/usr/bin/python3
"""
Test - Rotate 2D Matrix
"""
rotate_2d_matrix = __import__('0-rotate_2d_matrix').rotate_2d_matrix

if __name__ == "__main__":
    matrix = [[1, 2, 3],
              [4, 5, 6],
              [7, 8, 9]]

    rotate_2d_matrix(matrix)
    print(matrix)
```

### Expected Output:

```
[[7, 4, 1],
 [8, 5, 2],
 [9, 6, 3]]
```

## Function Prototype

```
def rotate_2d_matrix(matrix):
```

* **matrix**: a square 2D list of integers
* The matrix is **modified in-place**, nothing is returned

## Example

Input:

```
[[1, 2],
 [3, 4]]
```

After rotation:

```
[[3, 1],
 [4, 2]]
```

---

```
# Note: You must not use any built-in Python methods for rotation or importing libraries.
```
