#!/usr/bin/python3
"""Islnad perimeter module"""


def island_perimeter(grid):
    """Island perimeter function""""
    count = 0
    hunions = 0
    vunions = 0

    for i in range(len(grid)):
        for j in range(len(grid)-1):
            if grid[i][j] is 1:
                count = count + 1
                if grid[i][j] is grid[i][j+1]:
                    hunions += 1

    for j in range(len(grid)-1):
        for i in range(len(grid)):
            if grid[i][j] is 1:
                if grid[i][j] is grid[i+1][j]:
                    vunions += 1

#    print(hunions, vunions, count)
    count = count * 4
    unions = (vunions+hunions)*2
    count = count - unions
    return count
