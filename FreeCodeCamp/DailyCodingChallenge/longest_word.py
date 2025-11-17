# ! 2025-09-29
# ? Given a sentence, return the longest word in the sentence.
# ? Ignore periods (.) when determining word length.
# ? If multiple words are ties for the longest, return the first one that occurs.
def get_longest_word(sentence: str) -> str:
    words = sentence.split(" ")
    longest = ""
    for word in words:
        word_ignoring_period = word.replace(".", "")
        if len(word_ignoring_period) > len(longest):
            longest = word_ignoring_period
    return longest
