# ! 2025-11-11
# ? Given a string, return an array with the number of vowels and number of consonants in the string.
# ? Vowels consist of a, e, i, o, u in any case.
# ? Consonants consist of all other letters in any case.
# ? Ignore any non-letter characters.
# ? For example, given "Hello World", return [3, 7].

from typing import List


def count_vowels_and_consonants(s: str) -> List[int]:
    letters = list(filter(str.isalpha, s.lower()))
    vowels = len(list(filter(lambda x: x in 'aeiou', letters)))
    consonants = len(letters) - vowels
    return [vowels, consonants]
