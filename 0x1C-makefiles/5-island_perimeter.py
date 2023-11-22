#!/usr/bin/python3
"""the python file"""


def island_perimeter(grid):
    """island_perimeter with python"""
    """
    Args:
        grid(list): A list contain 1 or 0
    Returns:
        The perimeter of the island
    """
    width = len(grid[0])
    height = len(grid)
    jnb = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    jnb += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    jnb += 1
    return size * 4 - jnb * 2
