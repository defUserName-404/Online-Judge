class Solution:
    def sum_of_digits(self, n: int) -> int:
        sum = 0
        while n != 0:
            sum += n % 10
            n //= 10

        return sum

    # just start with the lartgest possible number with n digits and keep decreasing from the right size of the number until it does not fit within the sum
    def largestInteger(self, n: int, s: int) -> int:
        max: int = 0
        for i in range(n):
            max += 10**i * 9

        while max != -1:
            if self.sum_of_digits(max) == s:
                return max

            max -= 1

        return max
