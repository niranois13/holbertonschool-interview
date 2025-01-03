# Algorithmic Lockboxes Challenge

![lockboxes](https://i.imgur.com/LMzFyHo.png)

- [Algorithmic Lockboxes Challenge](#algorithmic-lockboxes-challenge)
  - [Description](#description)
  - [Problem Statement](#problem-statement)
  - [Input Format](#input-format)
    - [Example Input:](#example-input)
  - [Output Format](#output-format)
    - [Example Output:](#example-output)
  - [Constraints](#constraints)
  - [Implementation Details](#implementation-details)
- [Example Usage](#example-usage)
  - [How to Run](#how-to-run)
  - [License](#license)


## Description
The Algorithmic Lockboxes challenge is a Python-based problem where you are tasked with determining if all lockboxes in a given series can be unlocked. Each lockbox has a set of keys that can unlock other lockboxes, and you must use the keys strategically to open all lockboxes starting from a single unlocked box.

## Problem Statement
You are given a list of `n` lockboxes numbered from `0` to `n - 1`. Each lockbox contains a list of keys. A key with the value `j` can unlock lockbox `j`.

- Initially, lockbox `0` is unlocked.
- All other lockboxes are locked.
- Your goal is to determine if it is possible to unlock all the lockboxes.

## Input Format
- A list of lists `boxes`, where each inner list represents the keys contained in a particular lockbox.

### Example Input:
```python
boxes = [[1], [2], [3], []]
```

## Output Format
- Return `True` if all lockboxes can be unlocked; otherwise, return `False`.

### Example Output:
```python
True
```

## Constraints
1. The number of lockboxes `n` is between `1` and `1000`.
2. Keys are non-negative integers less than `n`.
3. Keys may be duplicated or missing in a lockbox.
4. A lockbox may contain no keys.

## Implementation Details
- Use a breadth-first search (BFS) or depth-first search (DFS) algorithm to explore all reachable lockboxes starting from lockbox `0`.
- Track visited lockboxes using a set to avoid redundant processing.

# Example Usage
lockboxes = [[1], [2], [3], []]
print(can_unlock_all(lockboxes))  # Output: True
```

## Testing
Write test cases to ensure correctness and edge-case handling:

```python
def test_can_unlock_all():
    assert can_unlock_all([[1], [2], [3], []]) == True
    assert can_unlock_all([[1, 3], [3, 0, 1], [2], [0]]) == True
    assert can_unlock_all([[1, 2, 3], [], [], []]) == True
    assert can_unlock_all([[], [0], [1]]) == False
    assert can_unlock_all([[1], [], [0]]) == False

test_can_unlock_all()
```

## How to Run
1. Clone this repository.
2. Ensure you have Python 3 installed on your machine.
3. Save the code in a Python file (e.g., `lockboxes.py`).
4. Run the file or test functions using:
   ```bash
   python lockboxes.py
   ```

## License
This project is licensed under the MIT License. See the LICENSE file for details.
