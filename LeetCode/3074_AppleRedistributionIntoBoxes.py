from bisect import bisect_left
from itertools import accumulate
from typing import List


class Solution:
	# def minimumBoxes(self, apple: List[int], capacity: List[int]) -> int:
	# 	total_apples = sum(apple)
	# 	capacity.sort(reverse=True)
	# 	box_count = 0
	# 	for c in capacity:
	# 		if total_apples <= 0:
	# 			break
	#
	# 		total_apples -= c
	# 		box_count += 1
	#
	# 	return box_count

	# Approach 2-> Binary search
	def minimumBoxes(self, apple: List[int], capacity: List[int]) -> int:
		running_capacity = list(accumulate(sorted(capacity, reverse=True)))
		total_apple = sum(apple)
		
		return bisect_left(running_capacity, total_apple) + 1
