# ! 2025-08-22
# ? Given a secret message string, and an integer representing the number of letters that were used to shift the message to encode it, return the decoded string.
# ? A positive number means the message was shifted forward in the alphabet.
# ? A negative number means the message was shifted backward in the alphabet.
# ? Case matters, decoded characters should retain the case of their encoded counterparts.
# ? Non-alphabetical characters should not get decoded.

def decode(message: str, shift: int) -> str:
    decoded = []
    for char in message:
        if char.isalpha():
            if char.islower():
                base = ord('a')
                shifted = (ord(char) - base - shift) % 26
                decoded_char = chr(base + shifted)
            else:
                base = ord('A')
                shifted = (ord(char) - base - shift) % 26
                decoded_char = chr(base + shifted)
            decoded.append(decoded_char)
        else:
            decoded.append(char)
    return ''.join(decoded)
