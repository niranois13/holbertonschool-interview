#!/usr/bin/python3
"""
0-island_perimeter
"""


def island_perimeter(grid):
    """Finds perimeter of an island"""
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    if not grid or len(grid) == 0:
        return 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 1
                if i < rows - 1 and grid[i+1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 1
                if j < cols - 1 and grid[i][j+1] == 1:
                    perimeter -= 1
    return perimeter
