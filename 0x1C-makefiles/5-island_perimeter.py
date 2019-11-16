#!/usr/bin/python3
"""
================================================================
Module with functions island_perimeter that return the perimeter
of the island described in grid:
    * 0 represents a water zone
    * 1 represents a land zonde
    * one cell is square with side length 1
    * Grid cells are connected horizontally/verticalle
    * Grid is rectangular, width and heigt don't exceed 100
=================================================================
"""


def island_perimeter(grid):
    """Function that return the perimeter of a island"""

    perimeter = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
                if grid[x][y]:
                    if x == 0 or grid[x - 1][y] == 0:
                        perimeter += 1
                    if x == (len(grid) - 1) or grid[x + 1][y] == 0:
                        perimeter += 1
                    if y == 0 or grid[x][y - 1] == 0:
                        perimeter += 1
                    if y == len(grid[x]) or grid[x][y + 1] == 0:
                        perimeter += 1
    return perimeter
