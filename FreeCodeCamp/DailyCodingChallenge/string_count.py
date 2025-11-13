# ! 2025-10-14
# ? Given two strings, determine how many times the second string appears in the first.
# ? The pattern string can overlap in the first string. For example, "aaa" contains "aa" twice. The first two a's and the second two.

# * Sliding window
def count(text: str, parameter: str) -> int:
    times_found = 0
    for i in range(len(text)):
        sub_str = text[i:i + len(parameter)]  # slice the string from i to i + len(parameter)
        if sub_str == parameter:
            times_found += 1
    return times_found
