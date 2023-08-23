#!/usr/bin/python3
"""Module to calculate the perimeter of an island."""


def island_perimeter(grid):
    """
    Calculates the perimeter of an island described in the grid.

    Args:
    grid (list[list[int]]): A list of lists representing the island grid.

    Returns:
    int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4

                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Subtract 2 for adjacent land cells
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2  # Subtract 2 for adjacent land cells

    return perimeter
