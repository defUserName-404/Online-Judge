# ! 2025-11-14
# ? ? Given a date in the format "YYYY-MM-DD", return the number of days left until the weekend.
# ? The weekend starts on Saturday.
# ? If the given date is Saturday or Sunday, return "It's the weekend!".
# ? Otherwise, return "X days until the weekend.", where X is the number of days until Saturday.
# ? If X is 1, use "day" (singular) instead of "days" (plural).
# ? Make sure the calculation ignores your local timezone.
from datetime import datetime


def days_until_weekend(date_string: str) -> str:
    date = datetime.strptime(date_string, "%Y-%m-%d")
    weekday = date.weekday()
    if weekday == 5 or weekday == 6:
        return "It's the weekend!"
    days_left = 5 - weekday
    return f"{days_left} day{'s' if days_left > 1 else ''} until the weekend."
