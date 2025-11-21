# ! 2025-08-21
# ? Given a number of miles ran, and a time in "MM:SS" (minutes:seconds) it took to run those miles,
# ? return a string for the average time it took to run each mile in the format "MM:SS".
# ? Add leading zeros when needed.

def mile_pace(miles: float, time_str: str) -> str:
    minutes, seconds = map(int, time_str.split(':'))
    seconds_taken_per_mile = round((minutes * 60 + seconds) / miles)

    return f"{seconds_taken_per_mile // 60:02d}:{seconds_taken_per_mile % 60:02d}"
