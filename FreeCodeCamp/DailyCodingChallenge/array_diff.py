# ! 2025-09-10
# ? Given two arrays with strings values, return a new array containing all the values that appear in only one of the arrays.
# ? The returned array should be sorted in alphabetical order.
def array_diff(arr1: list[str], arr2: list[str]) -> list[str]:
    # ^ is the symmetric difference operator
    return sorted(list(set(arr1) ^ set(arr2)))
