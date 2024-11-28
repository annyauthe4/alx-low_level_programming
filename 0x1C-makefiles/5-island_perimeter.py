#!/usr/bin/python3
"""This module defines a function that takes a list of list
of integers as argument.
"""


def island_perimeter(grid):
    """Function returns perimeter of island.

    Args:
        grid (list of list of int): 2D grid where 0 rep water, 1, land.


    Returns:
        int: the perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Start with 4 sides
                perimeter += 4

                # Check adjacent cells and subtract sides as needed
                if i > 0 and grid[i - 1][j] == 1:  # Above
                    perimeter -= 1
                if i < rows - 1 and grid[i + 1][j] == 1:  # Below
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:  # Left
                    perimeter -= 1
                if j < cols - 1 and grid[i][j + 1] == 1:  # Right
                    perimeter -= 1

    return perimeter
