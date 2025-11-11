# ! 2025-10-03
# ? Given a password string, return "weak", "medium", or "strong" based on the strength of the password.
# ? A password is evaluated according to the following rules:
# ? - It is at least 8 characters long.
# ? - It contains both uppercase and lowercase letters.
# ? - It contains at least one number.
# ? - It contains at least one special character from this set: !, @, # ?, $, %, ^, &, or *.
# ? Return "weak" if the password meets fewer than two of the rules. Return "medium" if the password meets 2 or 3 of the rules. Return "strong" if the password meets all 4 rules.
def check_strength(password: str) -> str | None:
    rules = dict(contains_8_chars=False, contains_upper=False, contains_lower=False, contains_digit=False,
                 contains_special=False)
    for ch in password:
        if len(password) >= 8:
            rules["contains_8_chars"] = True
        if ch.isupper():
            rules["contains_upper"] = True
        elif ch.islower():
            rules["contains_lower"] = True
        elif ch.isdigit():
            rules["contains_digit"] = True
        elif ch in "!@#$%^&*":
            rules["contains_special"] = True
    rules_met = sum(
        [rules["contains_8_chars"], rules["contains_upper"] and rules["contains_lower"], rules["contains_digit"],
         rules["contains_special"]])
    match rules_met:
        case 0 | 1:
            return "weak"
        case 2 | 3:
            return "medium"
    return "strong"
