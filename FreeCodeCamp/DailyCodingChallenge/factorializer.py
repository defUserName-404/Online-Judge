# ! 2025-08-18
# ? Given an integer from zero to 20, return the factorial of that number. The factorial of a number is the product of all the numbers between 1 and the given number.
# ? The factorial of zero is 1.
import math


def factorial(n: int) -> int:
    return math.factorial(n)

# recursion
# def factorial(n: int) -> int:
#     return n * factorial(n - 1) if n > 1 else 1
