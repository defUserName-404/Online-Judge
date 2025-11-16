# ! 2025-11-16
# ? Given two positive integers representing the width and height of a rectangle, determine how many rectangles can fit in the given one.
# ? Only count rectangles with integer width and height.
# ? For example, given 1 and 3, return 6. Three 1x1 rectangles, two 1x2 rectangles, and one 1x3 rectangle.
import math


def count_rectangles(width: int, height: int) -> int:
    return math.comb(width + 1, 2) * math.comb(height + 1, 2)
