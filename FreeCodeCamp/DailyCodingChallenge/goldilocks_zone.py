# ! 2025-11-18
# ? Given the mass of a star, return an array with the start and end distances of its Goldilocks Zone in Astronomical Units.
# ? To calculate the Goldilocks Zone:
# ? - Find the luminosity of the star by raising its mass to the power of 3.5.
# ? - The start of the zone is 0.95 times the square root of its luminosity.
# ? - The end of the zone is 1.37 times the square root of its luminosity.
# ? - Return the distances rounded to two decimal places.
# ? For example, given 1 as a mass, return [0.95, 1.37].

import math


def goldilocks_zone(mass: float) -> list[float]:
    luminosity_sqrt = math.sqrt(mass ** 3.5)
    return [_format_float(luminosity_sqrt * 0.95), _format_float(luminosity_sqrt * 1.37)]


def _format_float(num: float) -> float:
    return float("{:.2f}".format(num))
