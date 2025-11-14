# ! 2025-09-23
# ? Given two strings, determine if the second string is a mirror of the first.
# ? A string is considered a mirror if it contains the same letters in reverse order.
# ? Treat uppercase and lowercase letters as distinct.
# ? Ignore all non-alphabetical characters.
def is_mirror(str1: str, str2: str) -> bool:
    filtered_str1 = list(filter(str.isalpha, str1))
    filtered_str2 = list(filter(str.isalpha, str2))
    return filtered_str1 == filtered_str2[::-1]
