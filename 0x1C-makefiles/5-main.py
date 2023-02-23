#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    grid_1 = [
            [0, 0, 0, 0],
            [0, 1, 1, 0],
            [0, 0, 0, 0]
    ]
    grid_2 = [
            [0, 0, 0, 0],
            [0, 1, 1, 0],
            [0, 1, 0, 0],
            [0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
    print(island_perimeter(grid_1))
    print(island_perimeter(grid_2))
