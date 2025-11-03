# ! 2025-11-19
# ? Given an HTML element, return a list of its attributes following this criteria:
# ? - You will only be given one element.
# ? - Attributes will be in the format: attribute="value".
# ? - Return an array of strings with each attribute property and value, separated by a comma, in this format: ["attribute1, value1", "attribute2, value2"].
# ? - Return attributes in the order they are given.
# ? - If no attributes are found, return an empty array.

from html.parser import HTMLParser
from typing import List


class AttributeExtractor(HTMLParser):
    def __init__(self):
        super().__init__()
        self.attributes = []

    def handle_starttag(self, tag, attrs):
        self.attributes = [f"{attr[0]}, {attr[1]}" for attr in attrs]


def extract_attributes(element: str) -> List[str]:
    """Extract attributes from an HTML element.

    Args:
        element: A string containing a single HTML element

    Returns:
        List of strings in format ["attribute1, value1", "attribute2, value2"]
        or empty list if no attributes found
    """
    parser = AttributeExtractor()
    parser.feed(element)
    return parser.attributes
