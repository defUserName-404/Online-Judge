# ! 2025-11-09

def can_post(message):
    length = len(message)
    if length <= 40:
        return "short post"
    elif length <= 80:
        return "long post"
    return "invalid post"
