#!/usr/bin/python3
"""
Module 5-island_perimeter
Defines island_perimeter
"""


def island_perimeter(grid):
    """Returns the perimeter of the island"""
    row = len(grid)
    col = len(grid[0])
    per = 0
    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                if j > 0 and grid[i][j - 1] == 0:
                    per += 1
                if j < col - 1 and grid[i][j + 1] == 0:
                    per += 1
                if i > 0 and grid[i - 1][j] == 0:
                    per += 1
                if i < row - 1 and grid[i - 1][j] == 0:
                    per += 1
    return per
