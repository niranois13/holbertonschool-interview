# Rain

![rain](https://i.imgur.com/iVyijg8.png)

## Description

This project implements an algorithm in Python to calculate how much water can be retained after it rains, given a list of non-negative integers representing elevation levels (walls). The list simulates a cross-section of a relief map where water can accumulate between taller walls.

## Requirements

* **Language**: Python 3.4.3
* **OS**: Ubuntu 14.04 LTS
* **Style**: PEP 8 (version 1.7.x)
* **File Format**:
  * Must start with: `#!/usr/bin/python3`
  * Must end with a new line
* **Documentation**: All modules and functions must be documented
* **No Imports**: You are **not** allowed to import any module
* All files must be **executable**
* A `README.md` file is required at the project root

## Function

### `def rain(walls):`

* **Input**: `walls` is a list of non-negative integers representing wall heights
* **Output**: Returns the total number of square units of water that will be retained
* **Edge Cases**:

  * If `walls` is empty, return `0`
  * Assume the "outside" of the list cannot retain water

#### Example:

```
walls = [0, 1, 0, 2, 0, 3, 0, 4]
print(rain(walls))  # Output: 6

walls = [2, 0, 0, 4, 0, 0, 1, 0]
print(rain(walls))  # Output: 6
```
## Files

* `0-rain.py`: Contains the `rain()` function
* `0_main.py`: Sample test script for verifying output
* `README.md`: Project documentation

## Usage

Make your files executable and run:

```
chmod +x 0-rain.py 0_main.py
./0_main.py
```

Expected output:

```
6
6
```
