#!/usr/bin/python3
"""Create a island_perimeter module"""


def island_perimeter(grid):
    """Return the perimeter of the island"""
    width = len(grid[0])
    height = len(grid)
    perimeter = 0

    if width == 0 or height == 0:
        return perimeter
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                if i - 1 < 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i + 1 == height or grid[i + 1][j] == 0:
                    perimeter += 1
                if j - 1 < 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j + 1 == width or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
