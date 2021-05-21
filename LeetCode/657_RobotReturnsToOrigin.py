class Solution:
    def judgeCircle(self, moves: str) -> bool:
        x, y = 0, 0

        for ch in moves:
            if ch == 'L':
                x = x - 1
            elif ch == 'D':
                y = y - 1
            elif ch == 'R':
                x = x + 1
            else:
                y = y + 1

        return x == 0 and y == 0 