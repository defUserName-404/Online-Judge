# ! 2025-08-17
# ? Given an array of numbers and an integer target, find two unique numbers in the array that add up to the target value.
# ? Return an array with the indices of those two numbers, or "Target not found" if no two numbers sum up to the target.
# ? The returned array should have the indices in ascending order.
def find_target(arr: list[int], target: int) -> list[int] | str:
    indices: dict[int, int] = {}
    result: list[int] = []
    for i in range(len(arr)):
        if indices.__contains__(target - arr[i]):
            result.append(indices[target - arr[i]])
            result.append(i)
        indices[arr[i]] = i
    return result if len(result) > 0 else "Target not found"
