# ! 2025-11-10
# ? Given a matrix (an array of arrays) of single letters and a word to find, return the start and end indices of the word in the matrix.
# ?
# ? The given matrix will be filled with all lowercase letters (a-z).
# ? The word to find will always be in the matrix exactly once.
# ? The word to find will always be in a straight line in one of these directions:
# ? left to right
# ? right to left
# ? top to bottom
# ? bottom to top
# ? For example, given the matrix:
# ? [
# ?   ["a", "c", "t"],
# ?   ["t", "a", "t"],
# ?   ["c", "t", "c"]
# ? ]
# ? And the word "cat", return:
# ?
# ? [[0, 1], [2, 1]]
# ? Where [0, 1] are the indices for the "c" (start of the word), and [2, 1] are the indices for the "t" (end of the word).


def find_word(matrix: list[list[int]], word: str) -> list[list[int]] | None:
    rows, cols = len(matrix), len(matrix[0])
    length = len(word)
    directions = [
        (0, 1),  # right
        (0, -1),  # left
        (1, 0),  # down
        (-1, 0),  # up
    ]
    for x in range(rows):
        for y in range(cols):
            if matrix[x][y] != word[0]:
                continue
            end = _match_from(matrix, word, x, y, directions, length)
            if end:
                return [[x, y], end]
    return None  # Not found


def _match_from(matrix: list[list[int]], word: str, x: int, y: int, directions: list[tuple[int, int]], length: int) -> \
list[int] | None:
    for dx, dy in directions:
        if _matches_dir(matrix, word, x, y, dx, dy, length):
            end_x = x + dx * (length - 1)
            end_y = y + dy * (length - 1)
            return [end_x, end_y]
    return None


def _matches_dir(matrix: list[list[int]], word: str, x: int, y: int, dx: int, dy: int, length: int) -> bool:
    for i in range(length):
        nx = x + dx * i
        ny = y + dy * i
        if not _in_bounds(matrix, nx, ny):
            return False
        if matrix[nx][ny] != word[i]:
            return False
    return True


def _in_bounds(matrix: list[list[int]], x: int, y: int) -> bool:
    return 0 <= x < len(matrix) and 0 <= y < len(matrix[0])
