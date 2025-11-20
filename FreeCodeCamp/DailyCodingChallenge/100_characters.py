# ! 2025-11-18
# ? Given a string, repeat its characters until the result is exactly 100 characters long.
# ? If your repetitions go over 100 characters, trim the extra so it's exactly 100.
def one_hundred(chars: str) -> str:
    result = ""
    while len(result) < 100:
        result += chars
    return result[:100]
