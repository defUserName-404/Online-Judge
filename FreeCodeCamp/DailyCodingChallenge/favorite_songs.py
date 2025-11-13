from typing import TypedDict, List


# ! 2025-10-23
# ? Given an array of song objects representing your iPod playlist, return an array with the titles of the two most played songs, with the most played song first.
# ? Each object will have a "title" property (string), and a "plays" property (integer).


class Song(TypedDict):
    title: str
    plays: int


def favorite_songs(playlist: List[Song]) -> List[str]:
    return [song["title"] for song in sorted(playlist, key=lambda song: song["plays"], reverse=True)[:2]]
