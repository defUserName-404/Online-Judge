# ! 2025-09-07
# ? Given a string representing a Roman numeral, return its integer value.
def parse_roman_numeral(numeral: str) -> int:
    if not numeral:
        return 0

    # Roman numerals to their values
    roman_to_int = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    }

    result = 0
    prev_value = 0

    for char in reversed(numeral.upper()):
        current_value = roman_to_int.get(char, 0)

        if current_value < prev_value:
            result -= current_value
        else:
            result += current_value

        prev_value = current_value

    return result
