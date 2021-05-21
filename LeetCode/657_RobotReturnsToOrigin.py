class Solution:
    def judgeCircle(self, moves: str) -> bool:
        x = (moves.count('L') == moves.count('R'))
        y = (moves.count('U') == moves.count('D'))

        return x and y