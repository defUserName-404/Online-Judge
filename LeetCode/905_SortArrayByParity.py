from typing import List

class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        new_list = []

        for i in nums:
            if i % 2 == 0:
                new_list.insert(0, i)
            else:
                new_list.append(i)
        
        return new_list