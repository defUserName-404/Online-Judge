class Solution:
	def toggleLightBulbs(self, bulbs: list[int]) -> list[int]:
		bulbs_on = set()

		for b in bulbs:
			# if b not in bulbs_on:
			# 	bulbs_on.add(b)
			# else:
			# 	bulbs_on.remove(b)

			# or even shorter
			bulbs_on ^= {b}

		return sorted(list(bulbs_on))
