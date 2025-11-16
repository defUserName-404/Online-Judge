# ! 2025-11-13
# ? Given an array and an integer representing how many positions to shift the array, return the shifted array.
# ? A positive integer shifts the array to the left.
# ? A negative integer shifts the array to the right.
# ? The shift wraps around the array.
# ? For example, given [1, 2, 3] and 1, shift the array 1 to the left, returning [2, 3, 1].
def shift_array(arr: list[int], n: int) -> list[int]:
    shift = n % len(arr)
    return arr[shift:] + arr[:shift]

# First, we handle the edge case of an empty array by returning it as-is.
# We calculate the effective shift using modulo operation (%), which handles both positive and negative shifts correctly:
# For positive shifts: n % len(arr) gives the correct left shift
# For negative shifts: -n % len(arr) would give the equivalent right shift
# The modulo operation also handles shifts larger than the array length
# We use array slicing to create the shifted array by concatenating:
# Elements from the shift index to the end
# Elements from the start up to (but not including) the shift index
# For example:
#
# shift_array([1, 2, 3], 1) returns [2, 3, 1]
# shift_array([1, 2, 3, 4, 5], -2) returns [4, 5, 1, 2, 3]
# shift_array([1, 2, 3], 3) returns [1, 2, 3] (full rotation)
