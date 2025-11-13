# ! 2025-11-12
# ? Given strings for a person's name, title, and company, return an email signature as a single string using the following rules:
# ? The name should appear first, preceded by a prefix that depends on the first letter of the name. For names starting with (case-insensitive):
# ? A-I: Use >> as the prefix.
# ? J-R: Use -- as the prefix.
# ? S-Z: Use :: as the prefix.
# ? A comma and space (, ) should follow the name.
# ? The title and company should follow the comma and space, separated by " at " (with spaces around it).
# ? For example, given "Quinn Waverly", "Founder and CEO", and "TechCo" return "--Quinn Waverly, Founder and CEO at TechCo"


def generate_signature(name: str, title: str, company: str) -> str:
    first_character_of_name = name[0].lower()
    if 'a' <= first_character_of_name <= 'i':
        prefix = ">>"
    elif 'j' <= first_character_of_name <= 'r':
        prefix = "--"
    else:
        prefix = "::"
    return f"{prefix}{name}, {title} at {company}"
