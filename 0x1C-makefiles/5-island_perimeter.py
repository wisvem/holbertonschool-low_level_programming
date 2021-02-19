#!/usr/bin/python3
"""Islnad perimeter module"""


def island_perimeter(grid):
    """Island perimeter function"""
    count = 0
    hunions = 0
    vunions = 0

    for row in grid:
        for n in row:
            if n is 1:
                count += 1

        for j in range(1, len(row)):
            if row[j] is 1:
                if row[j] is row[j-1]:
                    hunions += 1

    for row in grid:
        for j in range(1, len(row)):
            if row[j] is 1:
                if row[j] is row[j-1]:
                    hunions += 1

#    print(hunions, vunions, count)
    count = count * 4
    unions = (vunions+hunions)*2
    count = count - unions
    return count
