# ! 2025-11-17
# ? Given two positive integers, return their greatest common divisor (GCD).
# import math


# def gcd(a: int, b: int) -> int:
#     return math.gcd(a, b)

# Euclidean algorithm
def gcd(a: int, b: int) -> int:
    while b:
        a, b = b, a % b
    return a
