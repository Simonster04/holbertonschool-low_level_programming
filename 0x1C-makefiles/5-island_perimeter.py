#!/usr/bin/python3
"""
containd island_perimeter function
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    perimeter = 0
    if len(grid) < 100:
        for list_num in range(len(grid) - 1):
            if len(grid[list_num]) < 100:
                for uno in range(len(grid[list_num]) - 1):
                    if grid[list_num][uno] == 1:
                        if grid[list_num + 1][uno] == 0:
                            perimeter += 1
                        if grid[list_num][uno + 1] == 0:
                            perimeter += 1
                        if grid[list_num - 1][uno] == 0:
                            perimeter += 1
                        if grid[list_num][uno - 1] == 0:
                            perimeter += 1

    return perimeter
