# ! 2025-09-16
# ? Given a paragraph, return a new paragraph where the first letter of each sentence is capitalized.
# ? All other characters should be preserved.
# ? Sentences can end with a period (.), one or more question marks (?), or one or more exclamation points (!).

import re


def capitalize(paragraph: str) -> str:
    if not paragraph:
        return paragraph

    # Find all sentence starts (start of string or after sentence-ending punctuation)
    # and capitalize the first letter after each match
    return re.sub(
        r'(^|\s*[.!?]+\s*)([a-z])',
        lambda m: m.group(1) + m.group(2).upper(),
        paragraph[0].upper() + paragraph[1:]
    )
