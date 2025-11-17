# ! 2025-09-28
# ? Given the first line of a comma-separated values (CSV) file, return an array containing the headings.
# ? The first line of a CSV file contains headings separated by commas.
# ? Remove any leading or trailing whitespace from each heading.
def get_headings(csv: str) -> list[str]:
    return list(map(str.strip, csv.split(",")))
