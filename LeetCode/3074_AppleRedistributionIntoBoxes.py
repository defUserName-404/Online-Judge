from typing import List


class Solution:
	def minimumBoxes(self, apple: List[int], capacity: List[int]) -> int:
		total_apples = sum(apple)
		capacity.sort(reverse=True)
		box_count = 0
		for c in capacity:
			if total_apples <= 0:
				break

			total_apples -= c
			box_count += 1

		return box_count
