def maxDistinctSubstringLengthInSessions(sessionString: str):
    sessions = sessionString.split("*")
    max_global_length = 0

    for session in sessions:
        if len(session) <= max_global_length:
            continue

        seen_chars = set()
        start = 0
        current_max = 0

        for end, char in enumerate(session):
            while char in seen_chars:
                seen_chars.remove(session[start])
                start += 1
            seen_chars.add(char)
            current_max = max(current_max, end - start + 1)

        max_global_length = max(max_global_length, current_max)

    return max_global_length
