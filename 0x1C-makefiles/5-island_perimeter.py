#!/usr/bin/python3
"""defines function for calculating the size of an island."""


def island_perimeter(grid):
    """Return the island perimeter.

    In the grid land is represented by 1 and water by 0.

    Args:
        grid (list): Collection of integers that symbolizes an island.
    Returns:
        The island defined grid perimeter.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
