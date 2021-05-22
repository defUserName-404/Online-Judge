from typing import List

class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        expectation = (n * (n + 1)) // 2
        reality = sum(nums)

        return expectation - reality