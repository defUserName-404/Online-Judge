# ! 2025-11-20
# ? Given a sentence string, return the longest word in the sentence.
# ? Words are separated by a single space.
# ? Only letters (a-z, case-insensitive) count toward the word's length.
# ? If there are multiple words with the same length, return the first one that appears.
# ? Return the word as it appears in the given string, with punctuation removed.
import re


def longest_word(sentence: str) -> str:
    def clean_word(word: str) -> str:
        return re.sub(r'[^a-zA-Z]', '', word)

    return clean_word(max(sentence.split(), key=lambda word: len(clean_word(word))))
