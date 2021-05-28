class Solution:
    def fib(self, n: int) -> int:
        fibonacci = [0, 0, 1]

        for i in range(2, n + 1):
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2]

        return fibonacci[n]