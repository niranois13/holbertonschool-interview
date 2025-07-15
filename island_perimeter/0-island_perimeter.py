#!/usr/bin/python3
"""
0-island_perimeter
"""


def island_perimeter(grid):
    """Finds perimeter of an island"""
    perimeter = 0

    if not grid or len(grid) == 0:
        return 0

    for i in range(len(grid) - 1):
        for j in range(len(grid[i]) - 1):
            if grid[i][j] == 1:
                perimeter += 4
                if grid[i][j+1] == 1:
                    perimeter -= 1
                if grid[i][j-1] == 1:
                    perimeter -= 1
                if grid[i-1][j] == 1:
                    perimeter -= 1
                if grid[i+1][j] == 1:
                    perimeter -= 1
    return perimeter
