#!/usr/bin/python3
"""5-island_perimeter
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid
    """
    if grid is None:
        return
    p = 0
    for num in range(len(grid)):
        row = grid[num]
        for i in range(len(row)):
            x = 0
            if row[i] is 1:
                x = 4
                if i > 0 and row[i - 1] is 1:
                    x -= 1
                if i < len(row) - 1 and row[i + 1] is 1:
                    x -= 1
                if num > 0 and grid[num - 1][i] is 1:
                    x -= 1
                if num < len(grid) - 1 and grid[num + 1][i] is 1:
                    x -= 1
            p += x
    return p
