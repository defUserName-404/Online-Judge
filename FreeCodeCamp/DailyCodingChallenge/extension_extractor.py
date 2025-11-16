# ! 2025-11-10
# ? Given a string representing a filename, return the extension of the file.
# ? The extension is the part of the filename that comes after the last period (.).
# ? If the filename does not contain a period or ends with a period, return "none".
# ? The extension should be returned as-is, preserving case.
def get_extension(filename: str) -> str:
    parts = filename.rsplit('.', 1)
    return parts[1] if len(parts) > 1 and parts[1] else 'none'
